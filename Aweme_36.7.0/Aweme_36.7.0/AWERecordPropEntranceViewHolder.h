@class UILabel, AWERecordPropEntranceComponent, FPStateFlow, AWEStickerSwitchImageView, UIButton;
@protocol FPUIComponent;

@interface AWERecordPropEntranceViewHolder : NSObject <FPUIHolder>

@property (class, readonly, nonatomic) Class componentType;

@property (retain, nonatomic) FPStateFlow *stateFlow;
@property (readonly, weak, nonatomic) AWERecordPropEntranceComponent *propComponent;
@property (nonatomic) BOOL hasTrackedIconShow;
@property (retain, nonatomic) UIButton *stickerSwitchButton;
@property (retain, nonatomic) AWEStickerSwitchImageView *stickerSwitchImageView;
@property (retain, nonatomic) UILabel *stickerSwitchLabel;
@property (retain, nonatomic) id<FPUIComponent> typeErasedComponent;

- (void)clickStickersBtn;
- (void)p_updateIcon:(id)a0;
- (void)trackPropEntranceIconFirstShowTimeIfNeed;
- (void)configStickerBtnWithURLArray:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (void)p_configStickerBtnWithURL:(id)a0 completion:(id /* block */)a1;
- (void)bindStateFlowChange;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
