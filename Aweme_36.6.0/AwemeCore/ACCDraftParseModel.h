@class NSString;

@interface ACCDraftParseModel : ACCParseModel

@property (retain, nonatomic) NSString *projectUUID;
@property (retain, nonatomic) NSString *relativePath;

+ (id)parseModelFromParameters:(id)a0;
+ (BOOL)checkParseModelValid:(id)a0;
+ (id)parseModelFromParser:(id)a0;

- (void).cxx_destruct;

@end
