@interface RedPointStorage : NSObject

+ (id)getRedPointCtrlInfoPath;
+ (BOOL)saveRedPointCtrlInfo:(id)a0;
+ (id)loadRedPointCtrlInfo;
+ (void)delRedPointCtrlInfo;

@end
