@class NSString, UIImageView, AWETaskLiteModel, UILabel, UIView;

@interface AWETaskLiteEntranceView : UIView <UIGestureRecognizerDelegate, AWETaskLiteEntranceView>

@property (retain, nonatomic) AWETaskLiteModel *model;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UILabel *rewardLabel;
@property (retain, nonatomic) UILabel *highestProfix;
@property (retain, nonatomic) UIImageView *missionImage;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIView *lineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ pauseMusicBlock;

- (void)setupGesture;
- (void)updateWithTaskLiteModel:(id)a0;
- (void)setupSubview;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleSingleTap:(id)a0;
- (void)reset;
- (void)setupLayout;

@end
