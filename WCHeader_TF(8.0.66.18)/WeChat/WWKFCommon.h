@interface WWKFCommon : NSObject

+ (BOOL)shouldTheWWKFFlowPerformShowErrAlert:(int)a0;
+ (BOOL)shouldTheWWKFFlowPerformAddContact:(unsigned int)a0;
+ (BOOL)shouldTheWWKFFlowConfirmToAddContact:(unsigned int)a0;
+ (BOOL)shouldTheWWKFFlowConfirmInHalfScreen:(unsigned int)a0;
+ (BOOL)shouldTheWWKFFlowPushMsgVCWithMovingToMainFrame:(unsigned int)a0;
+ (long long)contactUpdateMinInterval;

@end
