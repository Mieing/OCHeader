@class UIColor, NSString, MMLiveResourceFetcherFanoutFlowAction, MMLiveStorageCleanupPinningToken, FinderLiveGift, NSMutableArray;

@interface MMFinderLiveFansGroupCustomizableGiftColorVariant : NSObject

@property (retain, nonatomic) FinderLiveGift *finderLiveGift;
@property (retain, nonatomic) UIColor *variantColor;
@property (retain, nonatomic) NSString *defaultTextAttachment;
@property (nonatomic) struct { NSString *uri; NSString *md5Hash; } portraitPreviewPag;
@property (nonatomic) struct { NSString *uri; NSString *md5Hash; } landscapePreviewPag;
@property (nonatomic) BOOL pagLoading;
@property (retain, nonatomic) NSMutableArray *pendingCallbacks;
@property (retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *resourceFetcher;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken;
@property (readonly, nonatomic) NSString *variantProductId;
@property (readonly, nonatomic) NSString *thumbnail;

- (id)initWithFinderLiveGift:(id)a0;
- (void)preloadPagAnimation;
- (void)getPagAnimationWithCompleteBlock:(id /* block */)a0;
- (void)getPagAnimationWithCompleteBlockImpl:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
