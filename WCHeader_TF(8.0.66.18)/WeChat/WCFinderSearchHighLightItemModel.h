@class NSString, WCFinderFeedContentVM, WCFinderDataItem, NSMutableArray;

@interface WCFinderSearchHighLightItemModel : NSObject <WCFinderFeedContentVMExt>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (readonly, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) struct CGSize { double width; double height; } heightCache;
@property (retain, nonatomic) NSString *normalNickName;
@property (retain, nonatomic) NSMutableArray *nameHightkeywords;
@property (retain, nonatomic) NSString *normalText;
@property (retain, nonatomic) NSMutableArray *textHightkeywords;
@property (nonatomic) BOOL isHidePostTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getHighlightTextInContent:(id)a0 searchText:(id)a1;

- (id)initWithSearchContentVM:(id)a0;
- (void)processHeightName;
- (void)processHeightText;
- (BOOL)isFeedContainText;
- (BOOL)existMediaContent;
- (BOOL)isFeedContainPhoto;
- (BOOL)isFeedContainVideo;
- (void)startDownloadStreamImageImmediately;
- (void)startDownloadStreamImagePriority:(BOOL)a0;
- (void)generalStartDownloadImagePriority:(BOOL)a0 maxCount:(unsigned long long)a1 onlyThumb:(BOOL)a2;
- (void)cancelDownloadImage;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (void)processNickname:(id)a0 normalText:(id)a1 searchText:(id)a2;
- (void).cxx_destruct;

@end
