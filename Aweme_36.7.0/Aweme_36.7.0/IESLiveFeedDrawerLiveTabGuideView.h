@class HTSLiveScorllLabelView, HTSLiveMoreLiveEntrance;
@protocol IESLiveRoomService;

@interface IESLiveFeedDrawerLiveTabGuideView : UIView

@property (retain, nonatomic) HTSLiveScorllLabelView *titleLabel;
@property (retain, nonatomic) HTSLiveMoreLiveEntrance *entrance;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL prepareAnimate;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)configForEntrance:(id)a0 inRoom:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)clear;

@end
