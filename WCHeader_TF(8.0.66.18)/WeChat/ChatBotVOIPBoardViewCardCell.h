@class NSString, UIImageView;

@interface ChatBotVOIPBoardViewCardCell : ChatBotVOIPBoardViewBaseCell <IMsgExt>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *fromTitle;
@property (retain, nonatomic) NSString *fromImageName;
@property (retain, nonatomic) UIImageView *thumbImageView;

- (id)initWithMessage:(id)a0 openScene:(int)a1;
- (double)setupViewWithWidth:(double)a0;
- (id)createCardView;
- (void)changeImageViewContent;
- (void)onTapAction;
- (id)formMsgStyleContentView:(id)a0 previewSel:(SEL)a1;
- (void).cxx_destruct;

@end
