@class UIImageView, UILabel, BDPCDDynamicCardCustomActionItemModel;

@interface BDPCDDynamicCardGraphicContainerVideoView : UIView

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIImageView *playView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionItemModel *videoActionModel;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (id)initWithVideoModel:(id)a0;
- (void)coverImageDidTapAction:(id)a0;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void).cxx_destruct;

@end
