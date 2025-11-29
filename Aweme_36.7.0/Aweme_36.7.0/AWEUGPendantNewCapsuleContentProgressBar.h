@class NSString, NSNumber, NSDictionary;

@interface AWEUGPendantNewCapsuleContentProgressBar : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *rateColor;
@property (copy, nonatomic) NSString *rateStartColor;
@property (copy, nonatomic) NSString *firstShowBubbleText;
@property (copy, nonatomic) NSString *processPauseBubbleText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandUIFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldUIFrame;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) NSNumber *verticalWidth;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
