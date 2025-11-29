@class EcsRichTextButton, EcsRichLabelViewModel;

@interface EcsRichTextButtonViewModel : NSObject

@property (readonly, nonatomic) EcsRichTextButton *textButton;
@property (readonly, nonatomic) EcsRichLabelViewModel *labelVM;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } labelSize;

+ (id)createWithTextButton:(id)a0;

- (id)initWithTextButton:(id)a0;
- (void)setTextButton:(id)a0;
- (void).cxx_destruct;

@end
