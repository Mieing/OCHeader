@class NSString, NSDictionary;

@interface LSIMBulletTemplateModel : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *saasSchema;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardBizType;
@property (nonatomic) long long locationType;
@property (nonatomic) double defaultWidth;
@property (nonatomic) double defaultHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
