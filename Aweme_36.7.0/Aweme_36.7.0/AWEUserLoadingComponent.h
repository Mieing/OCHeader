@class AWEUserLoginLoadingView, NSString;

@interface AWEUserLoadingComponent : NSObject <AWEUserContainerLoadingComponentProtocol>

@property (retain, nonatomic) AWEUserLoginLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLoading:(long long)a0;
- (void)setupComponentView;
- (void).cxx_destruct;
- (void)stopLoading;
- (unsigned long long)componentType;
- (id)componentView;

@end
