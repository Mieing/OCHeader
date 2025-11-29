@interface AWEIMAttachmentWCDBDataBaseTracker : NSObject

+ (void)trackDBOpenSuccess;
+ (void)trackDBOperateErrorWithError:(id)a0 info:(id)a1 type:(long long)a2 version:(int)a3;
+ (void)trackDBOpenErrorWithError:(id)a0 info:(id)a1 version:(int)a2;
+ (void)trackDBTransferSuccessWithCount:(long long)a0 duration:(double)a1;

@end
