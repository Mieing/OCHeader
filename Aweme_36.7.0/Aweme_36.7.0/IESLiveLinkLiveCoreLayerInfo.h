@class NSNumber;

@interface IESLiveLinkLiveCoreLayerInfo : NSObject

@property (readonly, nonatomic) NSNumber *layerID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layerRect;
@property (readonly, nonatomic) long long zOrder;

- (void).cxx_destruct;

@end
