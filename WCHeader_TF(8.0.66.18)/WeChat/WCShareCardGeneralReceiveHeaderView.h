@class MMUILabel, MMUIButton;
@protocol WCShareCardGeneralReceiveHeaderDelegate;

@interface WCShareCardGeneralReceiveHeaderView : WCShareCardGeneralHeaderViewV2

@property (retain, nonatomic) MMUIButton *sureButton;
@property (retain, nonatomic) MMUILabel *vaildDateLabel;
@property (retain, nonatomic) MMUILabel *useabelTimeLabel;
@property (weak, nonatomic) id<WCShareCardGeneralReceiveHeaderDelegate> delegate;

- (id)initWithViewWidth:(double)a0 withCardSourceData:(id)a1 isGiftFromUserHeaderView:(BOOL)a2 isShareCard:(BOOL)a3 cardStatus:(int)a4 isNeedHideAccecptBtn:(BOOL)a5 delegate:(id)a6;
- (void)initViews;
- (void)setContentViewHetght;
- (void)singleSureButtonDidSelected;
- (void).cxx_destruct;

@end
