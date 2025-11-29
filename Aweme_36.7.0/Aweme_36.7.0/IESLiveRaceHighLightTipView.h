@class HTSLiveEpisodeHighLight, UIImageView, IESLiveRaceHighLightTipShareBtn, UILabel, UIView;
@protocol IESLiveRoomService;

@interface IESLiveRaceHighLightTipView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UIImageView *hotTagView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *tipArrow;
@property (retain, nonatomic) IESLiveRaceHighLightTipShareBtn *shareBtn;
@property (retain, nonatomic) HTSLiveEpisodeHighLight *model;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) id /* block */ shareAction;

- (id)initWithRoomModel:(id)a0;
- (void)showHighLightTipInView:(id)a0 onView:(id)a1 model:(id)a2;
- (void)p_showSelfInView:(id)a0 onView:(id)a1;
- (BOOL)needSportsStyle;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
