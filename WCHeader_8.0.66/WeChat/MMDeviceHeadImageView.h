@class NSString, MMWebImageView;

@interface MMDeviceHeadImageView : UIView <MMWebImageViewDelegate> {
    MMWebImageView *m_headView;
    BOOL m_borderRadius;
}

@property (nonatomic) struct CGSize { double width; double height; } m_headSize;
@property (nonatomic) BOOL isRound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)TrySetDefaultHeadImage;
- (void)TrySetDefaultHeadImage:(id)a0;
- (void)SetHeadImage:(id)a0;
- (void)setUpdateUrl:(id)a0;
- (void)layoutSubviews;
- (void)setDeviceIconUrl:(id)a0;
- (void)reset;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
