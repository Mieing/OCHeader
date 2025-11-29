@class NSDictionary, NSString;

@interface AWECustomStickerCropEditModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isFlipped;
@property (nonatomic) double rotatingAngle;
@property (nonatomic) double realAngle;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropViewFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } imageTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property (nonatomic) long long editType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
