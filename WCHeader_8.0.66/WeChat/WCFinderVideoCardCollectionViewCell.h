@class WCFinderMediaInfo, RichTextView, UILabel, WCFinderFeedImageView, WCFinderStaticCoverInfoView, WCFinderFeedMediaWrap;

@interface WCFinderVideoCardCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) WCFinderFeedImageView *imageContainer;
@property (retain, nonatomic) WCFinderStaticCoverInfoView *infoView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (nonatomic) double imageContainerHeight;

- (void)prepareForReuse;
- (void)adjustAllSubviews;
- (void)updateWithDataItem:(id)a0 showLikeFlag:(BOOL)a1;
- (id)getLikeRightItemByDataItem:(id)a0;
- (void)reloadImage;
- (void)setImage:(id)a0 isThumb:(BOOL)a1;
- (void).cxx_destruct;

@end
