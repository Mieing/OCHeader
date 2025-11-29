@class NSString, MMUILabel, RichTextView;
@protocol WCLabSettingFooterViewDelegate;

@interface WCLabSettingFooterView : UIView <ILinkEventExt> {
    MMUILabel *_tipLabel;
    RichTextView *_agreementView;
}

@property (weak, nonatomic) id<WCLabSettingFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initTipLabel;
- (void)initAgreementView;
- (void).cxx_destruct;

@end
