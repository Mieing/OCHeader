@class NSString;

@interface AWENewVideoCoverTextStickerViewConfig : ACCTextStickerConfig <AWENewVideoCoverLayerViewConfigProtocol>

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } originTransform;
@property (nonatomic) struct CGPoint { double x; double y; } originCenter;
@property (copy, nonatomic) id /* block */ hintDoDeleteCallback;
@property (copy, nonatomic) id /* block */ hintDeselectCallback;
@property (copy, nonatomic) id /* block */ hintDoSelectCallback;
@property (copy, nonatomic) id /* block */ externalHandleScaleAndRotationGestureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
