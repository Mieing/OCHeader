@class MMUIImageView, NSArray, MMWebImageView, CALayer, MMUILabel;

@interface WCCardNewPkgItemView : MMUIView

@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) MMUIImageView *readPockImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *numberLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) MMUILabel *stateLabel;
@property (retain, nonatomic) CALayer *shadowLayer;
@property (retain, nonatomic) NSArray *sameTpCardDataList;
@property (nonatomic) double stateX;
@property (nonatomic) double rightBaseLineX;
@property (nonatomic) long long state;

+ (double)cellHeight;

- (id)initWithSameTpCardDataList:(id)a0;
- (void)initData;
- (void)layoutSubviews;
- (void)configDataToUI;
- (id)stringWithTime:(double)a0;
- (void).cxx_destruct;

@end
