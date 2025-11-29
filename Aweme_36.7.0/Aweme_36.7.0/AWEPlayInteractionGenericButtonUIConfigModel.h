@class AWEPlayInteractionGenericButtonAnimationModel, NSString, NSNumber;

@interface AWEPlayInteractionGenericButtonUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEPlayInteractionGenericButtonAnimationModel *animation;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *buttonColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSNumber *disabled;
@property (retain, nonatomic) NSNumber *hideIcon;
@property (nonatomic) double iconWidth;
@property (nonatomic) double iconHeight;
@property (nonatomic) double iconInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
