@class NSArray, ChatBotRoomHeadComponentView, NSString, NSMutableArray;

@interface ChatBotMultiHeadImageRowView : UIView <ChatBotTalkingAnimationHeadViewDelegate>

@property (retain, nonatomic) NSArray *chatBotList;
@property (retain, nonatomic) NSMutableArray *headImageViewList;
@property (retain, nonatomic) ChatBotRoomHeadComponentView *curTalkingView;
@property (nonatomic) BOOL isRound;
@property (nonatomic) BOOL blurCircle;
@property (nonatomic) struct CGSize { double width; double height; } headImageSize;
@property (nonatomic) BOOL showNickName;
@property (nonatomic) BOOL needRelayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 chatBotList:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 chatBotList:(id)a1 headImageSize:(struct CGSize { double x0; double x1; })a2 isRound:(BOOL)a3 blurCircle:(BOOL)a4 showNickName:(BOOL)a5;
- (struct CGSize { double x0; double x1; })getHeadImageSize;
- (void)initHeadImageViews;
- (void)layoutSubviews;
- (id)getTalkingUsername;
- (void).cxx_destruct;

@end
