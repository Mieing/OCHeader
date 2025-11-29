@class NSString, NSNumber, AWEECShareQrConfig;

@interface AWEECShareReflowDialogInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL unshow;
@property (retain, nonatomic) NSNumber *dialogWidth;
@property (retain, nonatomic) NSNumber *dialogHeight;
@property (retain, nonatomic) AWEECShareQrConfig *qrConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)qrConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
