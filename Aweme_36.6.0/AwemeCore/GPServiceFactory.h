@protocol GPServiceContainerProtocol;

@interface GPServiceFactory : NSObject

@property (class, readonly, nonatomic) GPServiceFactory *sharedInstance;

@property (retain, nonatomic) id<GPServiceContainerProtocol> serviceContainer;

- (void).cxx_destruct;

@end
