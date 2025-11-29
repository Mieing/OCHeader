@class NSArray, NSDictionary, NSString, BDUGLuckySchemaProxyStatusTable;
@protocol BDUGLuckySchemaProxyTimeTable;

@interface BDUGLuckySchemaProxy : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckySchemaProxyTimeTable> *timeTable;
@property (copy, nonatomic) NSDictionary *abTestTable;
@property (copy, nonatomic) BDUGLuckySchemaProxyStatusTable *statusTable;
@property (copy, nonatomic) NSString *defaultSchema;
@property (copy, nonatomic) NSString *auditingSchema;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
