@class NSNumber, NSString, NSDictionary;

@interface HTSInteractStreamCanvas : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *canvasWidth;
@property (retain, nonatomic) NSNumber *canvasHeight;
@property (retain, nonatomic) NSString *background;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
