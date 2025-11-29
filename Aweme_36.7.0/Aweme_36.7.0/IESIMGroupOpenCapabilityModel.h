@class NSString, IESIMGroupOpenSchemaFloatModel;
@protocol Optional;

@interface IESIMGroupOpenCapabilityModel : JSONModel

@property (copy, nonatomic) NSString *target;
@property (nonatomic) long long bizLine;
@property (copy, nonatomic) NSString *bizScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) IESIMGroupOpenSchemaFloatModel<Optional> *floatModel;
@property (nonatomic) long long darkMode;
@property (copy, nonatomic) NSString<Optional> *mobExt;
@property (copy, nonatomic) NSString<Optional> *conversationId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)optionalPropertyNameSet;

- (id)initWithTarget:(id)a0 bizLine:(long long)a1 bizScene:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4;
- (id)checkCommonProperty;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
