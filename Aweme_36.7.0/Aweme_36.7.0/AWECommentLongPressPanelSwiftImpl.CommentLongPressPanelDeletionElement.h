@class AWECommentLongPressPanelContext;

@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelDeletionElement : NSObject <AWECommentLongPressPanelElementViewModelProtocol>

@property (nonatomic, retain) AWECommentLongPressPanelContext *commentPageContext;
@property (nonatomic) BOOL horizonMode;
@property (nonatomic) BOOL showRedPoint;

- (id)elementImage;
- (id)elementContent;
- (unsigned long long)elementContentStyle;
- (unsigned long long)elementInteractionStyle;
- (void)elementWillDisplay:(long long)a0;
- (id)customAccessibilityIdentifier;
- (BOOL)elementShouldShow;
- (void)elementTapped;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)elementType;

@end
