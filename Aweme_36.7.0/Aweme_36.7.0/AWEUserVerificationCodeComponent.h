@class AWEUserLoginInputModel, AWEUserLoginInputView, NSString;

@interface AWEUserVerificationCodeComponent : NSObject <AWEUserContainerVerificationComponentProtocol>

@property (retain, nonatomic) AWEUserLoginInputModel *inputModel;
@property (retain, nonatomic) AWEUserLoginInputView *inputView;
@property (copy, nonatomic) NSString *code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
