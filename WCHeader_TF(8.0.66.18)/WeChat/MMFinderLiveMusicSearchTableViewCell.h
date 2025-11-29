@class MMFinderLiveMusicAddDataItem, NSString, UIImageView, MMWebImageView, MMUILabel;

@interface MMFinderLiveMusicSearchTableViewCell : UITableViewCell <MMFinderLiveMusicSettingSearchExt>

@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) MMUILabel *musicNameLabel;
@property (retain, nonatomic) MMUILabel *musicAnchorLabel;
@property (retain, nonatomic) MMUILabel *durationLabel;
@property (retain, nonatomic) UIImageView *addStateImage;
@property (nonatomic) double contentWidth;
@property (retain, nonatomic) MMFinderLiveMusicAddDataItem *searchMusicDataItem;
@property (copy, nonatomic) id /* block */ musicAddedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferHeight;
+ (double)preferLabelLeft;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCoverImageView;
- (void)layoutMusicNameLabel;
- (void)layoutMusicAnchorLabel;
- (void)layoutDurationLabel;
- (void)layoutStateImg;
- (void)refreshContents;
- (id)highLightBrandAttrString:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)onMusicSearchDataItemAdded:(id)a0;
- (void)updateMusicAddedState;
- (void)addButtonAction;
- (void).cxx_destruct;

@end
