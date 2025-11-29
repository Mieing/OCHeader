@protocol IMagicCardStarterService;

@interface WAMagicCardStarterProxyService : NSObject

@property (class, retain, nonatomic) id<IMagicCardStarterService> externalIMP;

@end
