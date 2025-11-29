@class AWECommentLongPressPanelContext;

@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelSaveImageElement : NSObject <AWECommentLongPressPanelElementViewModelProtocol>

@property (nonatomic) BOOL horizonMode;
@property (nonatomic) BOOL showRedPoint;
@property (nonatomic, retain) AWECommentLongPressPanelContext *commentPageContext;

- (void)downloadSticker:(id)a0;
- (void)downloadMediaAtIndex:(long long)a0 forCommentModel:(id)a1;
- (void)downloadAllNormalImages:(id)a0;
- (void)showDownloadOptionsForCommentModel:(id)a0;
- (id)elementImage;
- (id)elementContent;
- (unsigned long long)elementContentStyle;
- (unsigned long long)elementInteractionStyle;
- (id)customAccessibilityIdentifier;
- (BOOL)elementShouldShow;
- (void)elementTapped;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)elementType;

@end
