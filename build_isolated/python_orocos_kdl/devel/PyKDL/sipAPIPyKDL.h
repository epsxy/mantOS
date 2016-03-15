/*
 * Internal module API header file.
 *
 * Generated by SIP 4.17
 */

#ifndef _PyKDLAPI_H
#define _PyKDLAPI_H


#include <sip.h>

/*
 * Convenient names to refer to various strings defined in this module.
 * Only the class names are part of the public API.
 */
#define sipNameNr_ChainIkSolverVel_pinv_givens 0
#define sipName_ChainIkSolverVel_pinv_givens &sipStrings_PyKDL[0]
#define sipNameNr_ChainFkSolverVel_recursive 29
#define sipName_ChainFkSolverVel_recursive &sipStrings_PyKDL[29]
#define sipNameNr_ChainFkSolverPos_recursive 56
#define sipName_ChainFkSolverPos_recursive &sipStrings_PyKDL[56]
#define sipNameNr_ChainIkSolverVel_pinv_nso 83
#define sipName_ChainIkSolverVel_pinv_nso &sipStrings_PyKDL[83]
#define sipNameNr_ChainIkSolverPos_NR_JL 109
#define sipName_ChainIkSolverPos_NR_JL &sipStrings_PyKDL[109]
#define sipNameNr_JntSpaceInertiaMatrix 132
#define sipName_JntSpaceInertiaMatrix &sipStrings_PyKDL[132]
#define sipNameNr_ChainIkSolverVel_wdls 154
#define sipName_ChainIkSolverVel_wdls &sipStrings_PyKDL[154]
#define sipNameNr_ChainIkSolverVel_pinv 176
#define sipName_ChainIkSolverVel_pinv &sipStrings_PyKDL[176]
#define sipNameNr_ChainIkSolverPos_LMA 198
#define sipName_ChainIkSolverPos_LMA &sipStrings_PyKDL[198]
#define sipNameNr_getRotationalInertia 219
#define sipName_getRotationalInertia &sipStrings_PyKDL[219]
#define sipNameNr_ChainJntToJacSolver 240
#define sipName_ChainJntToJacSolver &sipStrings_PyKDL[240]
#define sipNameNr_ChainIkSolverPos_NR 260
#define sipName_ChainIkSolverPos_NR &sipStrings_PyKDL[260]
#define sipNameNr_RotationalInertia 222
#define sipName_RotationalInertia &sipStrings_PyKDL[222]
#define sipNameNr_ChainIkSolverVel 280
#define sipName_ChainIkSolverVel &sipStrings_PyKDL[280]
#define sipNameNr_ChainIkSolverPos 297
#define sipName_ChainIkSolverPos &sipStrings_PyKDL[297]
#define sipNameNr_ChainFkSolverVel 314
#define sipName_ChainFkSolverVel &sipStrings_PyKDL[314]
#define sipNameNr_ChainFkSolverPos 331
#define sipName_ChainFkSolverPos &sipStrings_PyKDL[331]
#define sipNameNr_MultiplyJacobian 348
#define sipName_MultiplyJacobian &sipStrings_PyKDL[348]
#define sipNameNr_RigidBodyInertia 365
#define sipName_RigidBodyInertia &sipStrings_PyKDL[365]
#define sipNameNr_Joint__JointType 382
#define sipName_Joint__JointType &sipStrings_PyKDL[382]
#define sipNameNr_getNrOfSegments 399
#define sipName_getNrOfSegments &sipStrings_PyKDL[399]
#define sipNameNr_changeRefFrame 415
#define sipName_changeRefFrame &sipStrings_PyKDL[415]
#define sipNameNr_changeRefPoint 430
#define sipName_changeRefPoint &sipStrings_PyKDL[430]
#define sipNameNr_newNrOfColumns 445
#define sipName_newNrOfColumns &sipStrings_PyKDL[445]
#define sipNameNr_JntToCoriolis 460
#define sipName_JntToCoriolis &sipStrings_PyKDL[460]
#define sipNameNr_ChainDynParam 474
#define sipName_ChainDynParam &sipStrings_PyKDL[474]
#define sipNameNr_getNrOfJoints 488
#define sipName_getNrOfJoints &sipStrings_PyKDL[488]
#define sipNameNr_getFrameToTip 502
#define sipName_getFrameToTip &sipStrings_PyKDL[502]
#define sipNameNr_GetQuaternion 516
#define sipName_GetQuaternion &sipStrings_PyKDL[516]
#define sipNameNr_JntToGravity 530
#define sipName_JntToGravity &sipStrings_PyKDL[530]
#define sipNameNr_DH_Craig1989 543
#define sipName_DH_Craig1989 &sipStrings_PyKDL[543]
#define sipNameNr_GetTwistDot 556
#define sipName_GetTwistDot &sipStrings_PyKDL[556]
#define sipNameNr_RotationVel 568
#define sipName_RotationVel &sipStrings_PyKDL[568]
#define sipNameNr__eps_joints 580
#define sipName__eps_joints &sipStrings_PyKDL[580]
#define sipNameNr_setWeightJS 592
#define sipName_setWeightJS &sipStrings_PyKDL[592]
#define sipNameNr_setWeightTS 604
#define sipName_setWeightTS &sipStrings_PyKDL[604]
#define sipNameNr_JntArrayVel 616
#define sipName_JntArrayVel &sipStrings_PyKDL[616]
#define sipNameNr_getTypeName 628
#define sipName_getTypeName &sipStrings_PyKDL[628]
#define sipNameNr_JointOrigin 640
#define sipName_JointOrigin &sipStrings_PyKDL[640]
#define sipNameNr_GetEulerZYX 652
#define sipName_GetEulerZYX &sipStrings_PyKDL[652]
#define sipNameNr_GetEulerZYZ 664
#define sipName_GetEulerZYZ &sipStrings_PyKDL[664]
#define sipNameNr_GetRotAngle 676
#define sipName_GetRotAngle &sipStrings_PyKDL[676]
#define sipNameNr_ReverseSign 688
#define sipName_ReverseSign &sipStrings_PyKDL[688]
#define sipNameNr___setitem__ 700
#define sipName___setitem__ &sipStrings_PyKDL[700]
#define sipNameNr___getitem__ 712
#define sipName___getitem__ &sipStrings_PyKDL[712]
#define sipNameNr_std__string 724
#define sipName_std__string &sipStrings_PyKDL[724]
#define sipNameNr_changeBase 736
#define sipName_changeBase &sipStrings_PyKDL[736]
#define sipNameNr_chain_root 747
#define sipName_chain_root &sipStrings_PyKDL[747]
#define sipNameNr_getSegment 758
#define sipName_getSegment &sipStrings_PyKDL[758]
#define sipNameNr_addSegment 769
#define sipName_addSegment &sipStrings_PyKDL[769]
#define sipNameNr_setInertia 780
#define sipName_setInertia &sipStrings_PyKDL[780]
#define sipNameNr_getInertia 791
#define sipName_getInertia &sipStrings_PyKDL[791]
#define sipNameNr_Quaternion 519
#define sipName_Quaternion &sipStrings_PyKDL[519]
#define sipNameNr_SetInverse 802
#define sipName_SetInverse &sipStrings_PyKDL[802]
#define sipNameNr_JntToMass 813
#define sipName_JntToMass &sipStrings_PyKDL[813]
#define sipNameNr_VectorVel 823
#define sipName_VectorVel &sipStrings_PyKDL[823]
#define sipNameNr_doubleVel 833
#define sipName_doubleVel &sipStrings_PyKDL[833]
#define sipNameNr_setLambda 843
#define sipName_setLambda &sipStrings_PyKDL[843]
#define sipNameNr_CartToJnt 853
#define sipName_CartToJnt &sipStrings_PyKDL[853]
#define sipNameNr_JntToCart 863
#define sipName_JntToCart &sipStrings_PyKDL[863]
#define sipNameNr_segmentNr 873
#define sipName_segmentNr &sipStrings_PyKDL[873]
#define sipNameNr_setColumn 883
#define sipName_setColumn &sipStrings_PyKDL[883]
#define sipNameNr_getColumn 893
#define sipName_getColumn &sipStrings_PyKDL[893]
#define sipNameNr_chain_tip 903
#define sipName_chain_tip &sipStrings_PyKDL[903]
#define sipNameNr_hook_name 913
#define sipName_hook_name &sipStrings_PyKDL[913]
#define sipNameNr_root_name 923
#define sipName_root_name &sipStrings_PyKDL[923]
#define sipNameNr_JointAxis 933
#define sipName_JointAxis &sipStrings_PyKDL[933]
#define sipNameNr_stiffness 943
#define sipName_stiffness &sipStrings_PyKDL[943]
#define sipNameNr_TransAxis 953
#define sipName_TransAxis &sipStrings_PyKDL[953]
#define sipNameNr_JointType 389
#define sipName_JointType &sipStrings_PyKDL[389]
#define sipNameNr_v_base_AB 963
#define sipName_v_base_AB &sipStrings_PyKDL[963]
#define sipNameNr_Integrate 973
#define sipName_Integrate &sipStrings_PyKDL[973]
#define sipNameNr_frequency 983
#define sipName_frequency &sipStrings_PyKDL[983]
#define sipNameNr_SetToZero 993
#define sipName_SetToZero &sipStrings_PyKDL[993]
#define sipNameNr_Normalize 1003
#define sipName_Normalize &sipStrings_PyKDL[1003]
#define sipNameNr_coriolis 1013
#define sipName_coriolis &sipStrings_PyKDL[1013]
#define sipNameNr_TwistVel 1022
#define sipName_TwistVel &sipStrings_PyKDL[1022]
#define sipNameNr_GetTwist 1031
#define sipName_GetTwist &sipStrings_PyKDL[1031]
#define sipNameNr_GetFrame 1040
#define sipName_GetFrame &sipStrings_PyKDL[1040]
#define sipNameNr_FrameVel 1049
#define sipName_FrameVel &sipStrings_PyKDL[1049]
#define sipNameNr_JntToJac 1058
#define sipName_JntToJac &sipStrings_PyKDL[1058]
#define sipNameNr__maxiter 1067
#define sipName__maxiter &sipStrings_PyKDL[1067]
#define sipNameNr_iksolver 1076
#define sipName_iksolver &sipStrings_PyKDL[1076]
#define sipNameNr_fksolver 1085
#define sipName_fksolver &sipStrings_PyKDL[1085]
#define sipNameNr_qdot_out 1094
#define sipName_qdot_out &sipStrings_PyKDL[1094]
#define sipNameNr_Jacobian 356
#define sipName_Jacobian &sipStrings_PyKDL[356]
#define sipNameNr_Multiply 1103
#define sipName_Multiply &sipStrings_PyKDL[1103]
#define sipNameNr_Subtract 1112
#define sipName_Subtract &sipStrings_PyKDL[1112]
#define sipNameNr_JntArray 1121
#define sipName_JntArray &sipStrings_PyKDL[1121]
#define sipNameNr_getChain 1130
#define sipName_getChain &sipStrings_PyKDL[1130]
#define sipNameNr_addChain 1139
#define sipName_addChain &sipStrings_PyKDL[1139]
#define sipNameNr_getJoint 1148
#define sipName_getJoint &sipStrings_PyKDL[1148]
#define sipNameNr_addDelta 1157
#define sipName_addDelta &sipStrings_PyKDL[1157]
#define sipNameNr_RefPoint 436
#define sipName_RefPoint &sipStrings_PyKDL[436]
#define sipNameNr_EulerZYX 655
#define sipName_EulerZYX &sipStrings_PyKDL[655]
#define sipNameNr_EulerZYZ 667
#define sipName_EulerZYZ &sipStrings_PyKDL[667]
#define sipNameNr_Identity 1166
#define sipName_Identity &sipStrings_PyKDL[1166]
#define sipNameNr_Rotation 1175
#define sipName_Rotation &sipStrings_PyKDL[1175]
#define sipNameNr___iadd__ 1184
#define sipName___iadd__ &sipStrings_PyKDL[1184]
#define sipNameNr___isub__ 1193
#define sipName___isub__ &sipStrings_PyKDL[1193]
#define sipNameNr___repr__ 1202
#define sipName___repr__ &sipStrings_PyKDL[1202]
#define sipNameNr_gravity 1211
#define sipName_gravity &sipStrings_PyKDL[1211]
#define sipNameNr_maxiter 1068
#define sipName_maxiter &sipStrings_PyKDL[1068]
#define sipNameNr_base_AB 965
#define sipName_base_AB &sipStrings_PyKDL[965]
#define sipNameNr_newSize 1219
#define sipName_newSize &sipStrings_PyKDL[1219]
#define sipNameNr_columns 1227
#define sipName_columns &sipStrings_PyKDL[1227]
#define sipNameNr_segment 1235
#define sipName_segment &sipStrings_PyKDL[1235]
#define sipNameNr_Segment 761
#define sipName_Segment &sipStrings_PyKDL[761]
#define sipNameNr_getMass 1243
#define sipName_getMass &sipStrings_PyKDL[1243]
#define sipNameNr_getType 1251
#define sipName_getType &sipStrings_PyKDL[1251]
#define sipNameNr_getName 1259
#define sipName_getName &sipStrings_PyKDL[1259]
#define sipNameNr_damping 1267
#define sipName_damping &sipStrings_PyKDL[1267]
#define sipNameNr_inertia 1275
#define sipName_inertia &sipStrings_PyKDL[1275]
#define sipNameNr_RotAxis 1283
#define sipName_RotAxis &sipStrings_PyKDL[1283]
#define sipNameNr_Inverse 805
#define sipName_Inverse &sipStrings_PyKDL[805]
#define sipNameNr___sub__ 1291
#define sipName___sub__ &sipStrings_PyKDL[1291]
#define sipNameNr___add__ 1299
#define sipName___add__ &sipStrings_PyKDL[1299]
#define sipNameNr___div__ 1307
#define sipName___div__ &sipStrings_PyKDL[1307]
#define sipNameNr___mul__ 1315
#define sipName___mul__ &sipStrings_PyKDL[1315]
#define sipNameNr___neg__ 1323
#define sipName___neg__ &sipStrings_PyKDL[1323]
#define sipNameNr_matrix 1331
#define sipName_matrix &sipStrings_PyKDL[1331]
#define sipNameNr_rotvec 1338
#define sipName_rotvec &sipStrings_PyKDL[1338]
#define sipNameNr_lambda 1345
#define sipName_lambda &sipStrings_PyKDL[1345]
#define sipNameNr_q_init 1352
#define sipName_q_init &sipStrings_PyKDL[1352]
#define sipNameNr_Divide 1359
#define sipName_Divide &sipStrings_PyKDL[1359]
#define sipNameNr_factor 1366
#define sipName_factor &sipStrings_PyKDL[1366]
#define sipNameNr_resize 1373
#define sipName_resize &sipStrings_PyKDL[1373]
#define sipNameNr_getCOG 1380
#define sipName_getCOG &sipStrings_PyKDL[1380]
#define sipNameNr_origin 1387
#define sipName_origin &sipStrings_PyKDL[1387]
#define sipNameNr_offset 1394
#define sipName_offset &sipStrings_PyKDL[1394]
#define sipNameNr_TransZ 1401
#define sipName_TransZ &sipStrings_PyKDL[1401]
#define sipNameNr_TransY 1408
#define sipName_TransY &sipStrings_PyKDL[1408]
#define sipNameNr_TransX 1415
#define sipName_TransX &sipStrings_PyKDL[1415]
#define sipNameNr_W_a_p2 1422
#define sipName_W_a_p2 &sipStrings_PyKDL[1422]
#define sipNameNr_W_a_p1 1429
#define sipName_W_a_p1 &sipStrings_PyKDL[1429]
#define sipNameNr_F_a_b2 1436
#define sipName_F_a_b2 &sipStrings_PyKDL[1436]
#define sipNameNr_F_a_b1 1443
#define sipName_F_a_b1 &sipStrings_PyKDL[1443]
#define sipNameNr_R_a_b2 1450
#define sipName_R_a_b2 &sipStrings_PyKDL[1450]
#define sipNameNr_R_a_b1 1457
#define sipName_R_a_b1 &sipStrings_PyKDL[1457]
#define sipNameNr_torque 1464
#define sipName_torque &sipStrings_PyKDL[1464]
#define sipNameNr_Wrench 1471
#define sipName_Wrench &sipStrings_PyKDL[1471]
#define sipNameNr_t_this 1478
#define sipName_t_this &sipStrings_PyKDL[1478]
#define sipNameNr_GetRPY 1485
#define sipName_GetRPY &sipStrings_PyKDL[1485]
#define sipNameNr_GetRot 1492
#define sipName_GetRot &sipStrings_PyKDL[1492]
#define sipNameNr_DoRotZ 1499
#define sipName_DoRotZ &sipStrings_PyKDL[1499]
#define sipNameNr_DoRotY 1506
#define sipName_DoRotY &sipStrings_PyKDL[1506]
#define sipNameNr_DoRotX 1513
#define sipName_DoRotX &sipStrings_PyKDL[1513]
#define sipNameNr___ne__ 1520
#define sipName___ne__ &sipStrings_PyKDL[1520]
#define sipNameNr___eq__ 1527
#define sipName___eq__ &sipStrings_PyKDL[1527]
#define sipNameNr_Vector 1534
#define sipName_Vector &sipStrings_PyKDL[1534]
#define sipNameNr_string 729
#define sipName_string &sipStrings_PyKDL[729]
#define sipNameNr_q_dot 1541
#define sipName_q_dot &sipStrings_PyKDL[1541]
#define sipNameNr__grav 1547
#define sipName__grav &sipStrings_PyKDL[1547]
#define sipNameNr_q_max 1553
#define sipName_q_max &sipStrings_PyKDL[1553]
#define sipNameNr_q_min 1559
#define sipName_q_min &sipStrings_PyKDL[1559]
#define sipNameNr_q_out 1565
#define sipName_q_out &sipStrings_PyKDL[1565]
#define sipNameNr_p_out 1571
#define sipName_p_out &sipStrings_PyKDL[1571]
#define sipNameNr_frame 1577
#define sipName_frame &sipStrings_PyKDL[1577]
#define sipNameNr_deriv 1583
#define sipName_deriv &sipStrings_PyKDL[1583]
#define sipNameNr_array 1589
#define sipName_array &sipStrings_PyKDL[1589]
#define sipNameNr_chain 1595
#define sipName_chain &sipStrings_PyKDL[1595]
#define sipNameNr_Chain 1133
#define sipName_Chain &sipStrings_PyKDL[1133]
#define sipNameNr_f_tip 1601
#define sipName_f_tip &sipStrings_PyKDL[1601]
#define sipNameNr_joint 1607
#define sipName_joint &sipStrings_PyKDL[1607]
#define sipNameNr_twist 1613
#define sipName_twist &sipStrings_PyKDL[1613]
#define sipNameNr_scale 1619
#define sipName_scale &sipStrings_PyKDL[1619]
#define sipNameNr_Joint 1151
#define sipName_Joint &sipStrings_PyKDL[1151]
#define sipNameNr_force 1625
#define sipName_force &sipStrings_PyKDL[1625]
#define sipNameNr_Twist 1034
#define sipName_Twist &sipStrings_PyKDL[1034]
#define sipNameNr_theta 1631
#define sipName_theta &sipStrings_PyKDL[1631]
#define sipNameNr_alpha 1637
#define sipName_alpha &sipStrings_PyKDL[1637]
#define sipNameNr_Frame 424
#define sipName_Frame &sipStrings_PyKDL[424]
#define sipNameNr_UnitZ 1643
#define sipName_UnitZ &sipStrings_PyKDL[1643]
#define sipNameNr_UnitY 1649
#define sipName_UnitY &sipStrings_PyKDL[1649]
#define sipNameNr_UnitX 1655
#define sipName_UnitX &sipStrings_PyKDL[1655]
#define sipNameNr_gamma 1661
#define sipName_gamma &sipStrings_PyKDL[1661]
#define sipNameNr_pitch 1667
#define sipName_pitch &sipStrings_PyKDL[1667]
#define sipNameNr_Gamma 1673
#define sipName_Gamma &sipStrings_PyKDL[1673]
#define sipNameNr_angle 1679
#define sipName_angle &sipStrings_PyKDL[1679]
#define sipNameNr_Equal 1685
#define sipName_Equal &sipStrings_PyKDL[1685]
#define sipNameNr_value 1691
#define sipName_value &sipStrings_PyKDL[1691]
#define sipNameNr_PyKDL 1697
#define sipName_PyKDL &sipStrings_PyKDL[1697]
#define sipNameNr_grad 1703
#define sipName_grad &sipStrings_PyKDL[1703]
#define sipNameNr_v_in 1708
#define sipName_v_in &sipStrings_PyKDL[1708]
#define sipNameNr_p_in 1713
#define sipName_p_in &sipStrings_PyKDL[1713]
#define sipNameNr_q_in 1718
#define sipName_q_in &sipStrings_PyKDL[1718]
#define sipNameNr_dest 1723
#define sipName_dest &sipStrings_PyKDL[1723]
#define sipNameNr_src2 1728
#define sipName_src2 &sipStrings_PyKDL[1728]
#define sipNameNr_src1 1733
#define sipName_src1 &sipStrings_PyKDL[1733]
#define sipNameNr_rows 1738
#define sipName_rows &sipStrings_PyKDL[1738]
#define sipNameNr_size 1375
#define sipName_size &sipStrings_PyKDL[1375]
#define sipNameNr_Tree 1743
#define sipName_Tree &sipStrings_PyKDL[1743]
#define sipNameNr_qdot 1748
#define sipName_qdot &sipStrings_PyKDL[1748]
#define sipNameNr_pose 1753
#define sipName_pose &sipStrings_PyKDL[1753]
#define sipNameNr_type 1758
#define sipName_type &sipStrings_PyKDL[1758]
#define sipNameNr_name 918
#define sipName_name &sipStrings_PyKDL[918]
#define sipNameNr_None 1763
#define sipName_None &sipStrings_PyKDL[1763]
#define sipNameNr_diff 1768
#define sipName_diff &sipStrings_PyKDL[1768]
#define sipNameNr__rot 1773
#define sipName__rot &sipStrings_PyKDL[1773]
#define sipNameNr__vel 1778
#define sipName__vel &sipStrings_PyKDL[1778]
#define sipNameNr_beta 1783
#define sipName_beta &sipStrings_PyKDL[1783]
#define sipNameNr_alfa 1788
#define sipName_alfa &sipStrings_PyKDL[1788]
#define sipNameNr_axis 1793
#define sipName_axis &sipStrings_PyKDL[1793]
#define sipNameNr_roll 1798
#define sipName_roll &sipStrings_PyKDL[1798]
#define sipNameNr_Beta 1803
#define sipName_Beta &sipStrings_PyKDL[1803]
#define sipNameNr_Alfa 1808
#define sipName_Alfa &sipStrings_PyKDL[1808]
#define sipNameNr_Rot2 1813
#define sipName_Rot2 &sipStrings_PyKDL[1813]
#define sipNameNr_RotZ 1501
#define sipName_RotZ &sipStrings_PyKDL[1501]
#define sipNameNr_RotY 1508
#define sipName_RotY &sipStrings_PyKDL[1508]
#define sipNameNr_RotX 1515
#define sipName_RotX &sipStrings_PyKDL[1515]
#define sipNameNr_Norm 1818
#define sipName_Norm &sipStrings_PyKDL[1818]
#define sipNameNr_Zero 998
#define sipName_Zero &sipStrings_PyKDL[998]
#define sipNameNr_out 1099
#define sipName_out &sipStrings_PyKDL[1099]
#define sipNameNr_jac 1823
#define sipName_jac &sipStrings_PyKDL[1823]
#define sipNameNr_src 1827
#define sipName_src &sipStrings_PyKDL[1827]
#define sipNameNr_Add 1831
#define sipName_Add &sipStrings_PyKDL[1831]
#define sipNameNr_Iin 1835
#define sipName_Iin &sipStrings_PyKDL[1835]
#define sipNameNr_Iyz 1839
#define sipName_Iyz &sipStrings_PyKDL[1839]
#define sipNameNr_Ixz 1843
#define sipName_Ixz &sipStrings_PyKDL[1843]
#define sipNameNr_Ixy 1847
#define sipName_Ixy &sipStrings_PyKDL[1847]
#define sipNameNr_Izz 1851
#define sipName_Izz &sipStrings_PyKDL[1851]
#define sipNameNr_Iyy 1855
#define sipName_Iyy &sipStrings_PyKDL[1855]
#define sipNameNr_Ixx 1859
#define sipName_Ixx &sipStrings_PyKDL[1859]
#define sipNameNr_rot 1774
#define sipName_rot &sipStrings_PyKDL[1774]
#define sipNameNr_vel 1779
#define sipName_vel &sipStrings_PyKDL[1779]
#define sipNameNr_RPY 1488
#define sipName_RPY &sipStrings_PyKDL[1488]
#define sipNameNr_yaw 1863
#define sipName_yaw &sipStrings_PyKDL[1863]
#define sipNameNr_Rot 1495
#define sipName_Rot &sipStrings_PyKDL[1495]
#define sipNameNr_vec 1341
#define sipName_vec &sipStrings_PyKDL[1341]
#define sipNameNr_dot 1543
#define sipName_dot &sipStrings_PyKDL[1543]
#define sipNameNr_rhs 1867
#define sipName_rhs &sipStrings_PyKDL[1867]
#define sipNameNr_lhs 1871
#define sipName_lhs &sipStrings_PyKDL[1871]
#define sipNameNr_eps 1875
#define sipName_eps &sipStrings_PyKDL[1875]
#define sipNameNr_arg 1879
#define sipName_arg &sipStrings_PyKDL[1879]
#define sipNameNr__M 1883
#define sipName__M &sipStrings_PyKDL[1883]
#define sipNameNr__t 1886
#define sipName__t &sipStrings_PyKDL[1886]
#define sipNameNr__T 1889
#define sipName__T &sipStrings_PyKDL[1889]
#define sipNameNr__w 1892
#define sipName__w &sipStrings_PyKDL[1892]
#define sipNameNr__R 1895
#define sipName__R &sipStrings_PyKDL[1895]
#define sipNameNr__v 1898
#define sipName__v &sipStrings_PyKDL[1898]
#define sipNameNr__p 1901
#define sipName__p &sipStrings_PyKDL[1901]
#define sipNameNr_r2 1904
#define sipName_r2 &sipStrings_PyKDL[1904]
#define sipNameNr_r1 1907
#define sipName_r1 &sipStrings_PyKDL[1907]
#define sipNameNr_nr 1910
#define sipName_nr &sipStrings_PyKDL[1910]
#define sipNameNr_Ic 1913
#define sipName_Ic &sipStrings_PyKDL[1913]
#define sipNameNr_oc 1916
#define sipName_oc &sipStrings_PyKDL[1916]
#define sipNameNr_in 649
#define sipName_in &sipStrings_PyKDL[649]
#define sipNameNr_da 850
#define sipName_da &sipStrings_PyKDL[850]
#define sipNameNr_dt 1919
#define sipName_dt &sipStrings_PyKDL[1919]
#define sipNameNr_DH 1922
#define sipName_DH &sipStrings_PyKDL[1922]
#define sipNameNr_Zz 1925
#define sipName_Zz &sipStrings_PyKDL[1925]
#define sipNameNr_Yz 1928
#define sipName_Yz &sipStrings_PyKDL[1928]
#define sipNameNr_Xz 1931
#define sipName_Xz &sipStrings_PyKDL[1931]
#define sipNameNr_Zy 1934
#define sipName_Zy &sipStrings_PyKDL[1934]
#define sipNameNr_Yy 1937
#define sipName_Yy &sipStrings_PyKDL[1937]
#define sipNameNr_Xy 1940
#define sipName_Xy &sipStrings_PyKDL[1940]
#define sipNameNr_Zx 1943
#define sipName_Zx &sipStrings_PyKDL[1943]
#define sipNameNr_Yx 1946
#define sipName_Yx &sipStrings_PyKDL[1946]
#define sipNameNr_Xx 1949
#define sipName_Xx &sipStrings_PyKDL[1949]
#define sipNameNr_H 1923
#define sipName_H &sipStrings_PyKDL[1923]
#define sipNameNr_m 486
#define sipName_m &sipStrings_PyKDL[486]
#define sipNameNr_I 1952
#define sipName_I &sipStrings_PyKDL[1952]
#define sipNameNr_q 1954
#define sipName_q &sipStrings_PyKDL[1954]
#define sipNameNr_i 1956
#define sipName_i &sipStrings_PyKDL[1956]
#define sipNameNr_d 1706
#define sipName_d &sipStrings_PyKDL[1706]
#define sipNameNr_M 1884
#define sipName_M &sipStrings_PyKDL[1884]
#define sipNameNr_p 514
#define sipName_p &sipStrings_PyKDL[514]
#define sipNameNr_V 1958
#define sipName_V &sipStrings_PyKDL[1958]
#define sipNameNr_R 278
#define sipName_R &sipStrings_PyKDL[278]
#define sipNameNr_X 662
#define sipName_X &sipStrings_PyKDL[662]
#define sipNameNr_t 443
#define sipName_t &sipStrings_PyKDL[443]
#define sipNameNr_w 1865
#define sipName_w &sipStrings_PyKDL[1865]
#define sipNameNr_b 1960
#define sipName_b &sipStrings_PyKDL[1960]
#define sipNameNr_a 238
#define sipName_a &sipStrings_PyKDL[238]
#define sipNameNr_v 196
#define sipName_v &sipStrings_PyKDL[196]
#define sipNameNr_z 1841
#define sipName_z &sipStrings_PyKDL[1841]
#define sipNameNr_y 541
#define sipName_y &sipStrings_PyKDL[541]
#define sipNameNr_x 152
#define sipName_x &sipStrings_PyKDL[152]

#define sipMalloc                   sipAPI_PyKDL->api_malloc
#define sipFree                     sipAPI_PyKDL->api_free
#define sipBuildResult              sipAPI_PyKDL->api_build_result
#define sipCallMethod               sipAPI_PyKDL->api_call_method
#define sipCallErrorHandler         sipAPI_PyKDL->api_call_error_handler
#define sipParseResultEx            sipAPI_PyKDL->api_parse_result_ex
#define sipParseResult              sipAPI_PyKDL->api_parse_result
#define sipParseArgs                sipAPI_PyKDL->api_parse_args
#define sipParseKwdArgs             sipAPI_PyKDL->api_parse_kwd_args
#define sipParsePair                sipAPI_PyKDL->api_parse_pair
#define sipCommonDtor               sipAPI_PyKDL->api_common_dtor
#define sipConvertFromSequenceIndex sipAPI_PyKDL->api_convert_from_sequence_index
#define sipConvertFromVoidPtr       sipAPI_PyKDL->api_convert_from_void_ptr
#define sipConvertToVoidPtr         sipAPI_PyKDL->api_convert_to_void_ptr
#define sipAddException             sipAPI_PyKDL->api_add_exception
#define sipNoFunction               sipAPI_PyKDL->api_no_function
#define sipNoMethod                 sipAPI_PyKDL->api_no_method
#define sipAbstractMethod           sipAPI_PyKDL->api_abstract_method
#define sipBadClass                 sipAPI_PyKDL->api_bad_class
#define sipBadCatcherResult         sipAPI_PyKDL->api_bad_catcher_result
#define sipBadCallableArg           sipAPI_PyKDL->api_bad_callable_arg
#define sipBadOperatorArg           sipAPI_PyKDL->api_bad_operator_arg
#define sipTrace                    sipAPI_PyKDL->api_trace
#define sipTransferBack             sipAPI_PyKDL->api_transfer_back
#define sipTransferTo               sipAPI_PyKDL->api_transfer_to
#define sipTransferBreak            sipAPI_PyKDL->api_transfer_break
#define sipSimpleWrapper_Type       sipAPI_PyKDL->api_simplewrapper_type
#define sipWrapper_Type             sipAPI_PyKDL->api_wrapper_type
#define sipWrapperType_Type         sipAPI_PyKDL->api_wrappertype_type
#define sipVoidPtr_Type             sipAPI_PyKDL->api_voidptr_type
#define sipGetPyObject              sipAPI_PyKDL->api_get_pyobject
#define sipGetAddress               sipAPI_PyKDL->api_get_address
#define sipGetMixinAddress          sipAPI_PyKDL->api_get_mixin_address
#define sipGetCppPtr                sipAPI_PyKDL->api_get_cpp_ptr
#define sipGetComplexCppPtr         sipAPI_PyKDL->api_get_complex_cpp_ptr
#define sipIsPyMethod               sipAPI_PyKDL->api_is_py_method
#define sipCallHook                 sipAPI_PyKDL->api_call_hook
#define sipEndThread                sipAPI_PyKDL->api_end_thread
#define sipConnectRx                sipAPI_PyKDL->api_connect_rx
#define sipDisconnectRx             sipAPI_PyKDL->api_disconnect_rx
#define sipRaiseUnknownException    sipAPI_PyKDL->api_raise_unknown_exception
#define sipRaiseTypeException       sipAPI_PyKDL->api_raise_type_exception
#define sipBadLengthForSlice        sipAPI_PyKDL->api_bad_length_for_slice
#define sipAddTypeInstance          sipAPI_PyKDL->api_add_type_instance
#define sipFreeSipslot              sipAPI_PyKDL->api_free_sipslot
#define sipSameSlot                 sipAPI_PyKDL->api_same_slot
#define sipPySlotExtend             sipAPI_PyKDL->api_pyslot_extend
#define sipConvertRx                sipAPI_PyKDL->api_convert_rx
#define sipAddDelayedDtor           sipAPI_PyKDL->api_add_delayed_dtor
#define sipCanConvertToType         sipAPI_PyKDL->api_can_convert_to_type
#define sipConvertToType            sipAPI_PyKDL->api_convert_to_type
#define sipForceConvertToType       sipAPI_PyKDL->api_force_convert_to_type
#define sipCanConvertToEnum         sipAPI_PyKDL->api_can_convert_to_enum
#define sipReleaseType              sipAPI_PyKDL->api_release_type
#define sipConvertFromType          sipAPI_PyKDL->api_convert_from_type
#define sipConvertFromNewType       sipAPI_PyKDL->api_convert_from_new_type
#define sipConvertFromNewPyType     sipAPI_PyKDL->api_convert_from_new_pytype
#define sipConvertFromEnum          sipAPI_PyKDL->api_convert_from_enum
#define sipGetState                 sipAPI_PyKDL->api_get_state
#define sipLong_AsUnsignedLong      sipAPI_PyKDL->api_long_as_unsigned_long
#define sipExportSymbol             sipAPI_PyKDL->api_export_symbol
#define sipImportSymbol             sipAPI_PyKDL->api_import_symbol
#define sipFindType                 sipAPI_PyKDL->api_find_type
#define sipFindNamedEnum            sipAPI_PyKDL->api_find_named_enum
#define sipBytes_AsChar             sipAPI_PyKDL->api_bytes_as_char
#define sipBytes_AsString           sipAPI_PyKDL->api_bytes_as_string
#define sipString_AsASCIIChar       sipAPI_PyKDL->api_string_as_ascii_char
#define sipString_AsASCIIString     sipAPI_PyKDL->api_string_as_ascii_string
#define sipString_AsLatin1Char      sipAPI_PyKDL->api_string_as_latin1_char
#define sipString_AsLatin1String    sipAPI_PyKDL->api_string_as_latin1_string
#define sipString_AsUTF8Char        sipAPI_PyKDL->api_string_as_utf8_char
#define sipString_AsUTF8String      sipAPI_PyKDL->api_string_as_utf8_string
#define sipUnicode_AsWChar          sipAPI_PyKDL->api_unicode_as_wchar
#define sipUnicode_AsWString        sipAPI_PyKDL->api_unicode_as_wstring
#define sipConvertFromConstVoidPtr  sipAPI_PyKDL->api_convert_from_const_void_ptr
#define sipConvertFromVoidPtrAndSize    sipAPI_PyKDL->api_convert_from_void_ptr_and_size
#define sipConvertFromConstVoidPtrAndSize   sipAPI_PyKDL->api_convert_from_const_void_ptr_and_size
#define sipInvokeSlot               sipAPI_PyKDL->api_invoke_slot
#define sipInvokeSlotEx             sipAPI_PyKDL->api_invoke_slot_ex
#define sipSaveSlot                 sipAPI_PyKDL->api_save_slot
#define sipClearAnySlotReference    sipAPI_PyKDL->api_clear_any_slot_reference
#define sipVisitSlot                sipAPI_PyKDL->api_visit_slot
#define sipWrappedTypeName(wt)      ((wt)->type->td_cname)
#define sipDeprecated               sipAPI_PyKDL->api_deprecated
#define sipGetReference             sipAPI_PyKDL->api_get_reference
#define sipKeepReference            sipAPI_PyKDL->api_keep_reference
#define sipRegisterProxyResolver    sipAPI_PyKDL->api_register_proxy_resolver
#define sipRegisterPyType           sipAPI_PyKDL->api_register_py_type
#define sipTypeFromPyTypeObject     sipAPI_PyKDL->api_type_from_py_type_object
#define sipTypeScope                sipAPI_PyKDL->api_type_scope
#define sipResolveTypedef           sipAPI_PyKDL->api_resolve_typedef
#define sipRegisterAttributeGetter  sipAPI_PyKDL->api_register_attribute_getter
#define sipIsAPIEnabled             sipAPI_PyKDL->api_is_api_enabled
#define sipSetDestroyOnExit         sipAPI_PyKDL->api_set_destroy_on_exit
#define sipEnableAutoconversion     sipAPI_PyKDL->api_enable_autoconversion
#define sipInitMixin                sipAPI_PyKDL->api_init_mixin
#define sipExportModule             sipAPI_PyKDL->api_export_module
#define sipInitModule               sipAPI_PyKDL->api_init_module

/* These are deprecated. */
#define sipMapStringToClass         sipAPI_PyKDL->api_map_string_to_class
#define sipMapIntToClass            sipAPI_PyKDL->api_map_int_to_class
#define sipFindClass                sipAPI_PyKDL->api_find_class
#define sipFindMappedType           sipAPI_PyKDL->api_find_mapped_type
#define sipConvertToArray           sipAPI_PyKDL->api_convert_to_array
#define sipConvertToTypedArray      sipAPI_PyKDL->api_convert_to_typed_array
#define sipWrapper_Check(w)         PyObject_TypeCheck((w), sipAPI_PyKDL->api_wrapper_type)
#define sipGetWrapper(p, wt)        sipGetPyObject((p), (wt)->type)
#define sipReleaseInstance(p, wt, s)    sipReleaseType((p), (wt)->type, (s))
#define sipReleaseMappedType        sipReleaseType
#define sipCanConvertToInstance(o, wt, f)   sipCanConvertToType((o), (wt)->type, (f))
#define sipCanConvertToMappedType   sipCanConvertToType
#define sipConvertToInstance(o, wt, t, f, s, e)     sipConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipConvertToMappedType      sipConvertToType
#define sipForceConvertToInstance(o, wt, t, f, s, e)    sipForceConvertToType((o), (wt)->type, (t), (f), (s), (e))
#define sipForceConvertToMappedType sipForceConvertToType
#define sipConvertFromInstance(p, wt, t)    sipConvertFromType((p), (wt)->type, (t))
#define sipConvertFromMappedType    sipConvertFromType
#define sipConvertFromNamedEnum(v, pt)  sipConvertFromEnum((v), ((sipEnumTypeObject *)(pt))->type)
#define sipConvertFromNewInstance(p, wt, t) sipConvertFromNewType((p), (wt)->type, (t))

/* The strings used by this module. */
extern const char sipStrings_PyKDL[];

#define sipType_Vector              sipModuleAPI_PyKDL.em_types[32]
#define sipClass_Vector             sipModuleAPI_PyKDL.em_types[32]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Vector;

#define sipType_Rotation              sipModuleAPI_PyKDL.em_types[25]
#define sipClass_Rotation             sipModuleAPI_PyKDL.em_types[25]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Rotation;

#define sipType_Frame              sipModuleAPI_PyKDL.em_types[16]
#define sipClass_Frame             sipModuleAPI_PyKDL.em_types[16]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Frame;

#define sipType_Twist              sipModuleAPI_PyKDL.em_types[30]
#define sipClass_Twist             sipModuleAPI_PyKDL.em_types[30]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Twist;

#define sipType_Wrench              sipModuleAPI_PyKDL.em_types[34]
#define sipClass_Wrench             sipModuleAPI_PyKDL.em_types[34]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Wrench;

#define sipType_Joint              sipModuleAPI_PyKDL.em_types[22]
#define sipClass_Joint             sipModuleAPI_PyKDL.em_types[22]->u.td_wrapper_type

#define sipType_Joint_JointType              sipModuleAPI_PyKDL.em_types[23]
#define sipEnum_Joint_JointType              sipModuleAPI_PyKDL.em_types[23]->u.td_py_type

extern sipClassTypeDef sipTypeDef_PyKDL_Joint;

#define sipType_RotationalInertia              sipModuleAPI_PyKDL.em_types[27]
#define sipClass_RotationalInertia             sipModuleAPI_PyKDL.em_types[27]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_RotationalInertia;

#define sipType_RigidBodyInertia              sipModuleAPI_PyKDL.em_types[24]
#define sipClass_RigidBodyInertia             sipModuleAPI_PyKDL.em_types[24]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_RigidBodyInertia;

#define sipType_Segment              sipModuleAPI_PyKDL.em_types[28]
#define sipClass_Segment             sipModuleAPI_PyKDL.em_types[28]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Segment;

#define sipType_Chain              sipModuleAPI_PyKDL.em_types[0]
#define sipClass_Chain             sipModuleAPI_PyKDL.em_types[0]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Chain;

#define sipType_Tree              sipModuleAPI_PyKDL.em_types[29]
#define sipClass_Tree             sipModuleAPI_PyKDL.em_types[29]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Tree;

#define sipType_JntArray              sipModuleAPI_PyKDL.em_types[19]
#define sipClass_JntArray             sipModuleAPI_PyKDL.em_types[19]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_JntArray;

#define sipType_JntArrayVel              sipModuleAPI_PyKDL.em_types[20]
#define sipClass_JntArrayVel             sipModuleAPI_PyKDL.em_types[20]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_JntArrayVel;

#define sipType_Jacobian              sipModuleAPI_PyKDL.em_types[18]
#define sipClass_Jacobian             sipModuleAPI_PyKDL.em_types[18]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_Jacobian;

#define sipType_ChainFkSolverPos              sipModuleAPI_PyKDL.em_types[2]
#define sipClass_ChainFkSolverPos             sipModuleAPI_PyKDL.em_types[2]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainFkSolverPos;

#define sipType_ChainFkSolverVel              sipModuleAPI_PyKDL.em_types[4]
#define sipClass_ChainFkSolverVel             sipModuleAPI_PyKDL.em_types[4]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainFkSolverVel;

#define sipType_ChainFkSolverPos_recursive              sipModuleAPI_PyKDL.em_types[3]
#define sipClass_ChainFkSolverPos_recursive             sipModuleAPI_PyKDL.em_types[3]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainFkSolverPos_recursive;

#define sipType_ChainFkSolverVel_recursive              sipModuleAPI_PyKDL.em_types[5]
#define sipClass_ChainFkSolverVel_recursive             sipModuleAPI_PyKDL.em_types[5]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainFkSolverVel_recursive;

#define sipType_ChainIkSolverPos              sipModuleAPI_PyKDL.em_types[6]
#define sipClass_ChainIkSolverPos             sipModuleAPI_PyKDL.em_types[6]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverPos;

#define sipType_ChainIkSolverVel              sipModuleAPI_PyKDL.em_types[10]
#define sipClass_ChainIkSolverVel             sipModuleAPI_PyKDL.em_types[10]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverVel;

#define sipType_ChainIkSolverPos_NR              sipModuleAPI_PyKDL.em_types[8]
#define sipClass_ChainIkSolverPos_NR             sipModuleAPI_PyKDL.em_types[8]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverPos_NR;

#define sipType_ChainIkSolverPos_NR_JL              sipModuleAPI_PyKDL.em_types[9]
#define sipClass_ChainIkSolverPos_NR_JL             sipModuleAPI_PyKDL.em_types[9]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverPos_NR_JL;

#define sipType_ChainIkSolverVel_pinv              sipModuleAPI_PyKDL.em_types[11]
#define sipClass_ChainIkSolverVel_pinv             sipModuleAPI_PyKDL.em_types[11]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverVel_pinv;

#define sipType_ChainIkSolverVel_wdls              sipModuleAPI_PyKDL.em_types[14]
#define sipClass_ChainIkSolverVel_wdls             sipModuleAPI_PyKDL.em_types[14]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverVel_wdls;

#define sipType_ChainIkSolverPos_LMA              sipModuleAPI_PyKDL.em_types[7]
#define sipClass_ChainIkSolverPos_LMA             sipModuleAPI_PyKDL.em_types[7]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverPos_LMA;

#define sipType_ChainIkSolverVel_pinv_nso              sipModuleAPI_PyKDL.em_types[13]
#define sipClass_ChainIkSolverVel_pinv_nso             sipModuleAPI_PyKDL.em_types[13]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverVel_pinv_nso;

#define sipType_ChainIkSolverVel_pinv_givens              sipModuleAPI_PyKDL.em_types[12]
#define sipClass_ChainIkSolverVel_pinv_givens             sipModuleAPI_PyKDL.em_types[12]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainIkSolverVel_pinv_givens;

#define sipType_ChainJntToJacSolver              sipModuleAPI_PyKDL.em_types[15]
#define sipClass_ChainJntToJacSolver             sipModuleAPI_PyKDL.em_types[15]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainJntToJacSolver;

#define sipType_doubleVel              sipModuleAPI_PyKDL.em_types[35]
#define sipClass_doubleVel             sipModuleAPI_PyKDL.em_types[35]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_doubleVel;

#define sipType_VectorVel              sipModuleAPI_PyKDL.em_types[33]
#define sipClass_VectorVel             sipModuleAPI_PyKDL.em_types[33]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_VectorVel;

#define sipType_RotationVel              sipModuleAPI_PyKDL.em_types[26]
#define sipClass_RotationVel             sipModuleAPI_PyKDL.em_types[26]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_RotationVel;

#define sipType_FrameVel              sipModuleAPI_PyKDL.em_types[17]
#define sipClass_FrameVel             sipModuleAPI_PyKDL.em_types[17]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_FrameVel;

#define sipType_TwistVel              sipModuleAPI_PyKDL.em_types[31]
#define sipClass_TwistVel             sipModuleAPI_PyKDL.em_types[31]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_TwistVel;

#define sipType_JntSpaceInertiaMatrix              sipModuleAPI_PyKDL.em_types[21]
#define sipClass_JntSpaceInertiaMatrix             sipModuleAPI_PyKDL.em_types[21]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_JntSpaceInertiaMatrix;

#define sipType_ChainDynParam              sipModuleAPI_PyKDL.em_types[1]
#define sipClass_ChainDynParam             sipModuleAPI_PyKDL.em_types[1]->u.td_wrapper_type

extern sipClassTypeDef sipTypeDef_PyKDL_ChainDynParam;

#define sipType_std_string      sipModuleAPI_PyKDL.em_types[36]

extern sipMappedTypeDef sipTypeDef_PyKDL_std_string;

/* The SIP API, this module's API and the APIs of any imported modules. */
extern const sipAPIDef *sipAPI_PyKDL;
extern sipExportedModuleDef sipModuleAPI_PyKDL;

#endif
