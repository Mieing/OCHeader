@class UIImageView, NSString;

@interface BDPCDDynamicCardGraphicContainerImgView : UIView

@property (retain, nonatomic) UIImageView *containerImgView;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (id)initWithImageUrl:(id)a0;
- (void)imageDidTapAction:(id)a0;
- (id)clickableResource;
- (BOOL)hasChildClickableResource;
- (void).cxx_destruct;

@end
