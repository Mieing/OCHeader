@class WCDataItem, NSString, NSArray, NSURL, NSMutableDictionary, WCImageViewModel, WCContentItemFinderViewModel, CContact, WCMediaItem;
@protocol WCTogetherFeedViewItemDelegate;

@interface WCTogetherFeedViewItem : NSObject {
    NSString *_togetherText;
}

@property (readonly, nonatomic) NSMutableDictionary *cachedHeightForTogetherText;
@property (nonatomic) BOOL isPlayingVideo;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (weak, nonatomic) id<WCTogetherFeedViewItemDelegate> delegate;
@property (retain, nonatomic) CContact *contact;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL canShowTextState;
@property (copy, nonatomic) NSArray *togetherUsernames;
@property (copy, nonatomic) NSString *dateText;
@property (copy, nonatomic) NSString *displayLocation;
@property (nonatomic) BOOL locationClickable;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textParserPattern;
@property (nonatomic) struct CGSize { double width; double height; } textSize;
@property (copy, nonatomic) NSArray *textRichStyles;
@property (copy, nonatomic) NSArray *imageViewModels;
@property (copy, nonatomic) NSString *imageCountText;
@property (nonatomic) BOOL showsImageCount;
@property (retain, nonatomic) WCMediaItem *videoMediaItem;
@property (nonatomic) BOOL hasLinkIcon;
@property (retain, nonatomic) WCImageViewModel *linkIconViewModel;
@property (retain, nonatomic) NSURL *linkIconURL;
@property (retain, nonatomic) NSURL *linkIconResourceIdentifier;
@property (copy, nonatomic) NSString *linkPlayIconSVGName;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) NSString *linkSubtitle;
@property (retain, nonatomic) WCContentItemFinderViewModel *finderViewModel;

- (id)initWithDataItem:(id)a0;
- (void)loadContactInfo;
- (id)_contactFromDataItem:(id)a0;
- (id)_displayNameFromContact:(id)a0;
- (BOOL)_isAdDataItem:(id)a0;
- (id)_displayNameFromAdDataItem:(id)a0;
- (void)didClickContactInfo;
- (void)loadTogetherContactsInfo;
- (id)togetherText;
- (id)togetherTextForDataItem:(id)a0;
- (double)cachedHeightForTogetherTextWithWidth:(double)a0;
- (void)cacheHeight:(double)a0 forTogetherTextWithWidth:(double)a1;
- (void)loadLocationInfo;
- (void)didClickLocationInfo;
- (void)loadContent;
- (void)_loadContentForText;
- (void)_loadContentForImages;
- (void)_loadContentForVideo;
- (void)_loadContentForLink;
- (id)createDefaultLinkImage:(struct CGSize { double x0; double x1; })a0;
- (void)_loadContentForFinder;
- (void)startPlayingVideo;
- (void)stopPlayingVideo;
- (id)_safeURLWithString:(id)a0;
- (int)_photoTypeForContentItem:(id)a0;
- (void)didClickContentDetail;
- (void)didClickMediaItem:(id)a0;
- (void).cxx_destruct;

@end
