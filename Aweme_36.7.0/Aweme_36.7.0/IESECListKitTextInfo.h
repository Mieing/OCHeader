@class NSString;

@interface IESECListKitTextInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long fontWeight;
@property (copy, nonatomic) NSString *colorDark;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundColorTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
