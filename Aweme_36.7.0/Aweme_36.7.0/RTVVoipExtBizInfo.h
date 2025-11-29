@class NSString;

@interface RTVVoipExtBizInfo : JSONModel

@property (copy, nonatomic) NSString *openSchemaCallFinished;
@property (nonatomic) long long businessType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
