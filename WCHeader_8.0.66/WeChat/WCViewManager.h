@protocol IWCViewManager;

@interface WCViewManager : NSObject

@property (class, retain, nonatomic) id<IWCViewManager> externalIMP;

@end
