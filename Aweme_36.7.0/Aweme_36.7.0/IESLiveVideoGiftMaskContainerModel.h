@class NSArray, NSString;

@interface IESLiveVideoGiftMaskContainerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *anchorPointArray;
@property (copy, nonatomic) NSArray *flexPaddingArray;
@property (copy, nonatomic) NSArray *contentPaddingArray;
@property (copy, nonatomic) NSArray *rgbFrameArray;
@property (copy, nonatomic) NSArray *alphaFrameArray;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *fallbackLayer;
@property (nonatomic) BOOL disableFlexX;
@property (nonatomic) BOOL disableFlexY;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } flexPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rgbFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } alphaFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
