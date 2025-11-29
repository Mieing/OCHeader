@protocol IMBProxyService;

@interface MBProxyService : NSObject

@property (class, retain, nonatomic) id<IMBProxyService> externalIMP;

@end
