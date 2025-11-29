@class NSArray, NSMutableArray, BDSCDeviceListTagConfigModel;

@interface BDByteScreenRecommendTagContainer : UIView

@property (retain, nonatomic) NSMutableArray *tagViewArray;
@property (retain, nonatomic) BDSCDeviceListTagConfigModel *configModel;
@property (copy, nonatomic) NSArray *tagArray;

- (void)prepareReuse;
- (void)updateConfigModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)contentWidth;
- (void)layoutSubviews;

@end
