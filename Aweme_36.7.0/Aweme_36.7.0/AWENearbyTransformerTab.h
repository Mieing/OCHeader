@class NSString, NSArray;

@interface AWENearbyTransformerTab : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSArray *backgroundImg;
@property (nonatomic) long long cardId;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconsJSONTransformer;
+ (id)backgroundImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
