@class NSString, RichTextView;
@protocol MMFinderLiveConnectMicRandomHintTableFooterViewDelegate;

@interface MMFinderLiveConnectMicRandomHintTableFooterView : UIView <ILinkEventExt>

@property (retain, nonatomic) RichTextView *label;
@property (nonatomic) BOOL enableAction;
@property (weak, nonatomic) id<MMFinderLiveConnectMicRandomHintTableFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
