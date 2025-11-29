@class NSArray, NSString;

@interface AWEPayRouterInterceptor : NSObject <AWERouterInterceptorDelegate>

@property (retain, nonatomic) NSArray *schemeHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

@end
