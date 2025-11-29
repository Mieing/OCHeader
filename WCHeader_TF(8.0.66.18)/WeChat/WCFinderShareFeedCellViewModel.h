@class WCFinderDataItem, WCFinderShareToMomentsItem;

@interface WCFinderShareFeedCellViewModel : CommonMessageViewModel

@property (retain, nonatomic) WCFinderShareToMomentsItem *item;
@property (readonly, nonatomic) double estimateWidth;
@property (retain, nonatomic) WCFinderDataItem *dataItem;

+ (double)adjustImageRatioBy:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (BOOL)isPureText;
- (id)refObjectTid;
- (BOOL)isLive;
- (id)avatarUrl;
- (id)nickname;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)adjustImageRatio;
- (id)coverUrl;
- (id)fullCoverUrl;
- (BOOL)isVideo;
- (BOOL)isLongVideo;
- (id)desc;
- (unsigned long long)mediaPhotoCount;
- (void)exposeReport;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })defaultContentViewSize;
- (struct CGSize { double x0; double x1; })pureTextContentViewSize;
- (BOOL)hadFullInfo;
- (id)fullClipInset;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (id)authIconURL;
- (unsigned long long)authIconType;
- (BOOL)isMemberShipFeed;
- (void).cxx_destruct;

@end
