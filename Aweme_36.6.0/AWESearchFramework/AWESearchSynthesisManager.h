@class NSString;

@interface AWESearchSynthesisManager : AWESearchBaseManager

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *apiParam;
@property (copy, nonatomic) NSString *searchJson;
@property (copy, nonatomic) NSString *gid;

+ (void)replaceKey:(id)a0 byKey:(id)a1 inDict:(id)a2;
+ (id)secondJumpCommonParams;
+ (id)secondJumpParams:(id)a0;
+ (id)secondJumpSchemaWithParams:(id)a0 url:(id)a1;

- (id)appendCommonParamsWithKeyword:(id)a0;
- (id)urlWithKeyword:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;

@end
