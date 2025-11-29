@class UIViewController, StatusFooterJumpRingtone, RingToneDetail;

@interface TextState3rdPartyRingHandler : TextState3rdPartyFinderHandler

@property (retain, nonatomic) StatusFooterJumpRingtone *ring;
@property (retain, nonatomic) RingToneDetail *ringDetail;
@property (weak, nonatomic) UIViewController *vc;

+ (id)genRingBackDetailSubRequestPB:(id)a0;

- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (unsigned int)type;
- (BOOL)preferCustomView;
- (id)mediaDescription;
- (void)jumpToRingTonePickerViewController:(id)a0;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (void).cxx_destruct;

@end
