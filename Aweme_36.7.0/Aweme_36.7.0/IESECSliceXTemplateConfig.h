@class NSString;

@interface IESECSliceXTemplateConfig : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (nonatomic) BOOL disableScale;
@property (nonatomic) BOOL disableFitPhoneWidth;
@property (retain, nonatomic) NSString *customScaleKey;
@property (nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyKeyWithJSONKey;
+ (id)versionCustomTransformWithValue:(id)a0;

- (void).cxx_destruct;

@end
