@class NSString, NSNumber;

@interface IESECSKUViewConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
