@class UIButton, NSString;
@protocol IWARichTextViewHelper;

@interface WAAuthPageSheetProtocolView : WAAuthPageSheetBaseView <WARichTextViewHelperDelegate> {
    UIButton *_eventButton;
}

@property (retain, nonatomic) UIButton *checkButton;
@property (retain, nonatomic) id<IWARichTextViewHelper> richTextHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0 hostView:(id)a1;

- (void)setViewDataModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)showNeedAcceptProtocolAnimation;
- (void)onLinkClicked:(id)a0 linkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
