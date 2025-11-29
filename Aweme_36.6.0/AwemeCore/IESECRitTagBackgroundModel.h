@class NSArray, NSString;

@interface IESECRitTagBackgroundModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *radius;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSArray *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
