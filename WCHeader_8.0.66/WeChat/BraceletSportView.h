@class DeviceRankDetailResonse, NSString, DailySportRecord, BraceletStepScoreView;
@protocol BraceletSportRecordDelegate;

@interface BraceletSportView : UIView <BraceletStepScoreDelegate, BraceletTopicRecordDelegate>

@property (nonatomic) long long scene;
@property (retain, nonatomic) DailySportRecord *sportRecord;
@property (nonatomic) unsigned long long dateType;
@property (retain, nonatomic) DeviceRankDetailResonse *rankDetail;
@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) BraceletStepScoreView *stepView;
@property (weak, nonatomic) id<BraceletSportRecordDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rankDetail:(id)a1 isSelf:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dailySportRecord:(id)a1 dateType:(unsigned long long)a2 isSelf:(BOOL)a3;
- (void)clickLikeAnimate:(BOOL)a0;
- (void)clickUnlikeAnimate:(BOOL)a0;
- (void)layoutSubviews;
- (void)initSubview;
- (id)genTitleView;
- (void)onClickHistoryButton;
- (void)onClickLikeButton:(id)a0;
- (void)onClickSportRecord:(id)a0;
- (void)onClickAppWithWAContact:(id)a0;
- (void)onClickAppWithFinderUsername:(id)a0 records:(id)a1;
- (void).cxx_destruct;

@end
