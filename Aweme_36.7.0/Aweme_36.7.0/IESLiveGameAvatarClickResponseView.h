@class NSArray;
@protocol IESLiveGameAvatarClickResponseViewDataSource, HTSLiveStreamPlayerProvider;

@interface IESLiveGameAvatarClickResponseView : UIView

@property (copy, nonatomic) NSArray *avatarPersonaRects;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (nonatomic) unsigned long long alignMode;
@property (nonatomic) long long scaleType;
@property (weak, nonatomic) id<HTSLiveStreamPlayerProvider> streamProvider;
@property (nonatomic) double lastHitTime;
@property (weak, nonatomic) id<IESLiveGameAvatarClickResponseViewDataSource> dataSource;

- (BOOL)hitClickAvatarPersonaRegions:(struct CGPoint { double x0; double x1; })a0;
- (id)avatarPersonaRegionsWithCameraIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertAvatarPersonRectToLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
