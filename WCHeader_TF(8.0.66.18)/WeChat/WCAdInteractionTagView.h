@class WCAdInteractionTagInfo, WCDataItem, WCAdPagView, MMUILabel, WCAdInteractionTagLogic, NSString, WCAdURLImageView;

@interface WCAdInteractionTagView : MMUIView <IWCAdInteractionTagLogicExt>

@property (retain, nonatomic) WCAdInteractionTagInfo *adInteractionTagInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL isDetail;
@property (retain, nonatomic) WCAdURLImageView *normalIconImage;
@property (retain, nonatomic) WCAdPagView *activeIconPag;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (readonly, nonatomic) WCAdInteractionTagLogic *interactionTagLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 isDetail:(BOOL)a2;
- (void)dealloc;
- (void)initView;
- (void)updateView;
- (void)adjustView;
- (void)onInteractionActiveStateChanged:(id)a0 contentItemScene:(unsigned long long)a1 isActive:(BOOL)a2;
- (void).cxx_destruct;

@end
