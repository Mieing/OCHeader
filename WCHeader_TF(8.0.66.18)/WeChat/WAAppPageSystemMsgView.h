@class NSString, UIImageView, RichTextView;
@protocol WAAppPageSystemMsgViewDelegate;

@interface WAAppPageSystemMsgView : UIView <ILinkEventExt> {
    UIImageView *m_bgImageView;
    RichTextView *m_richTextView;
    NSString *m_text;
}

@property (nonatomic) BOOL useLightStyle;
@property (weak, nonatomic) id<WAAppPageSystemMsgViewDelegate> delegate;
@property (nonatomic) double textVerMargin;
@property (nonatomic) double textHorMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needUpdateLightStyle;
- (void)layoutSubviews;
- (void)updateText:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
