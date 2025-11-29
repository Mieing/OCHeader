@class UIScrollView, ChatBotVOIPBoardViewWeAppProcessTitleView, NSString;

@interface ChatBotVOIPBoardViewWeAppProcessView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIScrollView *cardView;
@property (nonatomic) double curTop;
@property (retain, nonatomic) ChatBotVOIPBoardViewWeAppProcessTitleView *curLoadingTitleView;
@property (nonatomic) unsigned int poiTextShowTime;
@property (retain, nonatomic) NSString *cur_sessionId;
@property (retain, nonatomic) NSString *chatbotAnswerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleLongPress:(id)a0;
- (void)menuOption1Tapped;
- (void)menuOption2Tapped;
- (void)layoutCardView;
- (void)insertPOIProcessData:(id)a0;
- (void)insertProcessData:(id)a0;
- (void)insertProcessDataInner:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)stopProcess:(BOOL)a0;
- (void).cxx_destruct;

@end
