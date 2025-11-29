@class NSString, UIImageView, AWEAwemeModel, UILabel, UIView, AWESearchStickerModel;

@interface AWELongPressPanelPictureSearchBaseViewModel : AWELongPressPanelBaseViewModel

@property (retain, nonatomic) UIView *infoContainerView;
@property (nonatomic) BOOL isAppeared;
@property (nonatomic) BOOL needTrackerRealityTagShow;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *infoImageView;
@property (retain, nonatomic) UIView *imageContainerView;
@property (retain, nonatomic) AWESearchStickerModel *stickerModel;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (copy, nonatomic) NSString *intent;
@property (nonatomic) unsigned long long searchIntent;
@property (copy, nonatomic) NSString *searchIntentTrack;
@property (copy, nonatomic) NSString *searchIntentDataText;
@property (copy, nonatomic) NSString *searchIntentDataIntent;
@property (nonatomic) BOOL requestFlag;
@property (nonatomic) BOOL hasReportedShowTrace;
@property (nonatomic) BOOL hasReportedTagShowTrace;

+ (Class)aAWEPadBizUIAdapterClass;
+ (id)longPressPanelViewModel;

- (void)updateCurrentAwemeModel:(id)a0;
- (id)aAWEPadBizUIAdapter;
- (void)configVM;
- (void)fetchTagInfo;
- (void)fetchIntentData;
- (unsigned long long)fetchSearchIntent;
- (id)getStringByIntent:(unsigned long long)a0;
- (id)fetchDescribeStringWithIntent:(unsigned long long)a0;
- (BOOL)enableSubView;
- (void)trackerIconRealityTagShow;
- (id)videoLongPressEntranceDefaultText;
- (id)videoLongPressChannelBlackList;
- (void)updateTagInfo:(BOOL)a0;
- (void)reloadInfoImage:(id)a0 text:(id)a1;
- (double)p_infoLabelWidth;
- (double)imageContainerViewWH;
- (double)arrowImgWH;
- (double)imageContainerViewMargin;
- (void)tagRequestCompleted:(id)a0;
- (BOOL)videoLongPressEntranceShowOptEnable;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
