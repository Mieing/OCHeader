@class AWEIMMessage;

@interface AWEIMSubcriptionContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ onCoverageTapBlock;
@property (nonatomic) BOOL hasBackgroundImg;
@property (weak, nonatomic) AWEIMMessage *message;

- (void).cxx_destruct;

@end
