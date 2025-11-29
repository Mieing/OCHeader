@class NSDictionary, NSString, AWEBillboardLabel, AWEAwemeModel, UILabel, AWETeenUserAvatarView, YYLabel;

@interface AWETeenGeneralVideoInfoCell : UICollectionViewCell <AWETeenSubscribeMessage>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWETeenUserAvatarView *authorAvatarView;
@property (retain, nonatomic) AWEBillboardLabel *authorNameLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *subscribeLabel;
@property (retain, nonatomic) YYLabel *videoContentLabel;
@property (nonatomic) double cellHeight;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithString:(id)a0;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateSubscribeStatus;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)updateVideoContent;
- (id)p_timeStringForTimeStamp:(double)a0;
- (void)authorInfoTapped;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateTimeString;

@end
