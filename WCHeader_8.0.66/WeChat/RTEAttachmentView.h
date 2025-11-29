@class RTETextAttachment;
@protocol RTEAttachmentViewDelegate;

@interface RTEAttachmentView : UIView

@property (nonatomic) unsigned int attachmentType;
@property (retain, nonatomic) RTETextAttachment *attachment;
@property (nonatomic) BOOL bNeedLayout;
@property (weak, nonatomic) id<RTEAttachmentViewDelegate> providerDelegate;
@property (nonatomic) unsigned int colorType;

- (id)initWithAttachment:(id)a0;
- (void)removeFromSuperview;
- (void)layoutView;
- (void)onClickObject;
- (void)didAddToSuperview;
- (void).cxx_destruct;

@end
