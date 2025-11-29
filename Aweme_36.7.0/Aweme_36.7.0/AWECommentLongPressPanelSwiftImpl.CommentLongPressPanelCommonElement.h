@class AWECommentLongPressPanelContext;

@interface AWECommentLongPressPanelSwiftImpl.CommentLongPressPanelCommonElement : NSObject <AWECommentLongPressPanelElementViewModelProtocol> {
    void /* unknown type, empty encoding */ commonModel;
}

@property (nonatomic, retain) AWECommentLongPressPanelContext *commentPageContext;
@property (nonatomic) BOOL showRedPoint;
@property (nonatomic) BOOL horizonMode;

- (id)elementImage;
- (id)elementContent;
- (unsigned long long)elementContentStyle;
- (unsigned long long)elementInteractionStyle;
- (void)elementWillDisplay:(long long)a0;
- (void)elementDidEndDisplaying:(long long)a0;
- (id)elementImageURL;
- (BOOL)elementShouldShow;
- (void)elementTapped;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)elementType;

@end
