@class UILabel, MMUILabel, MMFinderLiveSongItem;
@protocol MMFinderLiveSongManageTableViewCellDelegate;

@interface MMFinderLiveSongManageTableViewCell : MMFinderLiveMultiSelectTableViewCell

@property (retain, nonatomic) UILabel *warningLabel;
@property (nonatomic) double lastContentViewWidth;
@property (retain, nonatomic) MMUILabel *musicNameLabel;
@property (retain, nonatomic) MMFinderLiveSongItem *songItem;
@property (nonatomic) unsigned int rankIndex;
@property (weak, nonatomic) id<MMFinderLiveSongManageTableViewCellDelegate> songTableCellDelegate;
@property (nonatomic) BOOL disable;
@property (nonatomic) BOOL shouldAdaptToDarkLight;

+ (double)preferHeight;
+ (id)identifier;
+ (double)getSeparatorLeftInset;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutMusicNameLabel;
- (void)updateMusicNameLabelOrigin;
- (void)updateWarningLabelOrigin;
- (void)refreshUI;
- (void)reset;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (double)adjustedLeftOffsetForEditing;
- (void)onTapGesture:(id)a0;
- (void)updateMusicLabel;
- (void)updateWarningLabel;
- (double)warningPadding;
- (void).cxx_destruct;

@end
