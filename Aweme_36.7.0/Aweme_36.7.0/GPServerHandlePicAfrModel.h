@class NSString;

@interface GPServerHandlePicAfrModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *algorithm;
@property (nonatomic) double maskArea;
@property (copy, nonatomic) NSString *pic;
@property (nonatomic) double maskRatio;
@property (copy, nonatomic) NSString *picConf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
