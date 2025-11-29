@class NSNumber, NSString;

@interface IESECListKitMaskInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *colorFrom;
@property (copy, nonatomic) NSString *colorTo;
@property (copy, nonatomic) NSString *colorLight;
@property (copy, nonatomic) NSString *colorDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
