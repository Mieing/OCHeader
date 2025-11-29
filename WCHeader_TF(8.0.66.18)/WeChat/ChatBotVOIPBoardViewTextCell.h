@class NSString, RichTextView;

@interface ChatBotVOIPBoardViewTextCell : ChatBotVOIPBoardViewBaseCell <ILinkEventExt>

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessage:(id)a0 openScene:(int)a1;
- (double)setupViewWithWidth:(double)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateBaseReportDataPB:(id)a0;
- (void).cxx_destruct;

@end
