@class NSString, MMUIViewController, TextStateCardReporter;

@interface TextStatePublishOperateUseCase : NSObject

@property (weak, nonatomic) MMUIViewController *curViewController;
@property (retain, nonatomic) TextStateCardReporter *cardReporter;
@property (copy, nonatomic) NSString *passthroughIconId;
@property (copy, nonatomic) id /* block */ onDeleteSuccessHandler;
@property (nonatomic) BOOL shouldShowRedDotForPublish;
@property (copy, nonatomic) NSString *educationDescForPublish;
@property (copy, nonatomic) id /* block */ textStateDynamicGetter;

- (id)initWithViewController:(id)a0;
- (void)popupActionSheet:(id)a0;
- (void)publishNewTextState;
- (void)editCurrentTextState;
- (void)__publishOrEditTextState:(id)a0;
- (id)getSelfCurrentDisplayTextStateModel;
- (void).cxx_destruct;

@end
