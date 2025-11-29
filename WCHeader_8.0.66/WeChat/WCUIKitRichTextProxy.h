@class NSString;
@protocol IWCRichTextLabelDelegate;

@interface WCUIKitRichTextProxy : NSObject <ILinkEventExt>

@property (weak, nonatomic) id<IWCRichTextLabelDelegate> richTextLabelDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setGenearlPasteboardString:(id)a0;

- (id)getRichTextLabelWithDelegate:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
