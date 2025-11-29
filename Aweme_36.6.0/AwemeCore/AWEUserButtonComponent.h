@class NSString, AWEUserLoginButtonView;

@interface AWEUserButtonComponent : NSObject <AWEUserContainerButtonComponentProtocol>

@property (retain, nonatomic) AWEUserLoginButtonView *buttonView;
@property (nonatomic) BOOL buttonClicked;
@property (nonatomic) BOOL needAutoClick;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *buttonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonStatusChanged:(long long)a0;
- (void)setupComponentView;
- (void)updateAutoClick:(BOOL)a0;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (unsigned long long)componentType;
- (id)componentView;

@end
