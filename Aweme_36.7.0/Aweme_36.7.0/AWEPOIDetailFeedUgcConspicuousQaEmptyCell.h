@class AWEPOIFeedUgcQAEntranceInfoModel, UIImageView, AWEPOIDetailConstData, UILabel, UIView, NSString;
@protocol AWEPOIDetailFeedUgcConspicuousQaEmptyCellDelegate;

@interface AWEPOIDetailFeedUgcConspicuousQaEmptyCell : UICollectionViewCell <AWEPOIDetailAwemeWaterfallAwemeCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIImageView *writeImageView;
@property (retain, nonatomic) UILabel *writeEmptyLabel;
@property (retain, nonatomic) UIView *writeBottomView;
@property (retain, nonatomic) UILabel *writePromptLabel;
@property (retain, nonatomic) UIImageView *moreFoldIcon;
@property (retain, nonatomic) AWEPOIFeedUgcQAEntranceInfoModel *qaModel;
@property (retain, nonatomic) AWEPOIDetailConstData *constData;
@property (copy, nonatomic) NSString *creationIDForToComment;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcConspicuousQaEmptyCellDelegate> delegate;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;

- (void)rx_store:(id)a0 didSetWithModule:(id)a1;
- (id)trackingParams;
- (void)updateCellWithModel:(id)a0 constData:(id)a1 index:(long long)a2;
- (void)updateRateCardWithModel:(id)a0;
- (id)trackingParamsForWrite;
- (void)bottomViewDidTap;
- (void)writeViewDidTap;
- (void)moreFoldDidTap;
- (void)didCompleteShow;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
