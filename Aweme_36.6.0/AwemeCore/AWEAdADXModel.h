@class NSString, AWEAdADXFrequenceControlModel;

@interface AWEAdADXModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ADXURL;
@property (copy, nonatomic) NSString *ADXName;
@property (nonatomic) BOOL labelCanClick;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *bannerURL;
@property (retain, nonatomic) AWEAdADXFrequenceControlModel *frequenceControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)frequenceControlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
