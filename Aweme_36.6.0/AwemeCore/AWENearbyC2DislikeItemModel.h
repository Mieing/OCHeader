@class NSString;

@interface AWENearbyC2DislikeItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *dislikeType;
@property (copy, nonatomic) NSString *serverExtra;
@property (copy, nonatomic) NSString *mobExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
