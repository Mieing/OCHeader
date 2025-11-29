@class NSURL, NSString;
@protocol RxInjector;

@interface RxWebServiceAccessConnector : NSObject {
    NSURL *_webServiceURL;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSURL *hostURL;
@property (readonly, nonatomic) NSString *apiVersion;

- (id)initWithInjector:(id)a0;
- (void).cxx_destruct;
- (id)webServiceURL;

@end
