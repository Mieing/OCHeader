@class NSDictionary, UIViewController, NSMutableSet;

@interface IESECShopAttachmentContainerView : IESECShopForwardView {
    UIViewController *_responderViewController;
    NSMutableSet *_attachmentResponders;
    NSDictionary *_attachmentInfos;
}

@property (readonly, nonatomic) BOOL isAttached;
@property (copy, nonatomic) id /* block */ layoutHandler;

- (void)triggerLayout;
- (id)responderViewController;
- (void)attachWithInfo:(id)a0;
- (void)detachWithInfo:(id)a0;
- (void)attachAllResponders;
- (void)detachAllResponders;
- (void)addAttachmentResponder:(id)a0;
- (void)removeAttachmentResponder:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)layoutSubviews;

@end
