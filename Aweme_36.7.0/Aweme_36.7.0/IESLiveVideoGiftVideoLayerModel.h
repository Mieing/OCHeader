@class NSString, IESLiveVideoGiftMaskContainerModel, NSArray;

@interface IESLiveVideoGiftVideoLayerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL enableTap;
@property (retain, nonatomic) IESLiveVideoGiftMaskContainerModel *container;
@property (copy, nonatomic) NSArray *alphaFrameArray;
@property (copy, nonatomic) NSArray *rgbFrameArray;
@property (copy, nonatomic) NSArray *originSizeArray;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alphaFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rgbFrame;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (nonatomic) BOOL disableLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)containerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
