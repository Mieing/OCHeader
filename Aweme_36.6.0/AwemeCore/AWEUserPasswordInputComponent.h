@class NSString, AWEUserLoginInputView, AWEUserLoginInputModel;

@interface AWEUserPasswordInputComponent : NSObject <AWEUserContainerPasswordComponentProtocol>

@property (retain, nonatomic) NSString *inputPassword;
@property (retain, nonatomic) AWEUserLoginInputView *passwordView;
@property (retain, nonatomic) AWEUserLoginInputModel *inputModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearInputText;
- (void)setupComponentView;
- (void).cxx_destruct;
- (unsigned long long)componentType;
- (id)componentView;

@end
