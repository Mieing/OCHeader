@class NSString, BDKAnnotationView;

@interface BDAMapBaseAnnotationView : MAAnnotationView <BDKAnnotationViewProtocol>

@property (nonatomic) double angle;
@property (weak, nonatomic) BDKAnnotationView *customAnnotationView;
@property (retain, nonatomic) id annotation;
@property (nonatomic) long long zIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)convertDragState:(long long)a0;

- (void)startAnnotationAnimation:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)layoutSubviews;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
