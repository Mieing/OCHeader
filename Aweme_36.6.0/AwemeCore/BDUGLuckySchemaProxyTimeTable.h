@class NSString;

@interface BDUGLuckySchemaProxyTimeTable : BDUGLuckyBDModel

@property (nonatomic) double startTimeMs;
@property (nonatomic) double endTimeMs;
@property (copy, nonatomic) NSString *targetSchema;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
