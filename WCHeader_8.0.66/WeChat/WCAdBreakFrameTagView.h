@class WCDataItem, WCAdBreakFrameTagLogic, WCAdBreakFrameInfo, WCAdTypewriterLabel, NSString, MMUIButton, WCAdURLImageView;

@interface WCAdBreakFrameTagView : MMUIView <IWCAdBreakFramePlayInteractionExt>

@property (retain, nonatomic) WCAdBreakFrameInfo *adBreakFrameInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL isDetail;
@property (retain, nonatomic) WCAdBreakFrameTagLogic *tagLogic;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) WCAdTypewriterLabel *titleView;
@property (retain, nonatomic) MMUIButton *bgButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adBreakFrameInfo:(id)a1 dataItem:(id)a2 isDetail:(BOOL)a3;
- (void)initView;
- (void)layoutSubviews;
- (void)onClickBgButton;
- (void)onBreakFrameInteractionStateChanged:(id)a0 interactionState:(int)a1;
- (void).cxx_destruct;

@end
