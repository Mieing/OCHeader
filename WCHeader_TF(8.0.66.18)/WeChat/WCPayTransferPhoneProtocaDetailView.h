@class WCPayTransferPhoneProtocalHalfPage, NSString, UILabel, RichTextView;

@interface WCPayTransferPhoneProtocaDetailView : UIView <ILinkEventExt>

@property (weak, nonatomic) WCPayTransferPhoneProtocalHalfPage *parentVC;
@property (retain, nonatomic) RichTextView *protoLink;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
