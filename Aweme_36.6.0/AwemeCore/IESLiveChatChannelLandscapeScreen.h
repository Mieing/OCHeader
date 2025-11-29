@class IESLivePublicScreenView, HTSEventContext, HTSEventForwardingView, UIView, NSNumber, IESLiveChatChannelToolbar;
@protocol IESLiveRoomService;

@interface IESLiveChatChannelLandscapeScreen : UIView

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) HTSEventForwardingView *animationContainer;
@property (retain, nonatomic) HTSEventForwardingView *topScreen;
@property (retain, nonatomic) IESLiveChatChannelToolbar *bottomBar;
@property (nonatomic) BOOL didOpen;
@property (retain, nonatomic) IESLivePublicScreenView *currentPublicScreenView;

- (id)initWithRoom:(id)a0 trackContext:(id)a1 diContext:(id)a2;
- (void)insertTopScreenView:(id)a0;
- (void)insertAnimationContainer:(id)a0;
- (void)showMentionView:(BOOL)a0;
- (void)removeAllTopScreenViews;
- (void)removeLandscapeScreen;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)setupViews;

@end
