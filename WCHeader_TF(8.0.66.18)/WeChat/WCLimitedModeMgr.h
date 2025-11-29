@protocol IWCLimitedModeMgr;

@interface WCLimitedModeMgr : NSObject

@property (class, retain, nonatomic) id<IWCLimitedModeMgr> externalIMP;

@end
