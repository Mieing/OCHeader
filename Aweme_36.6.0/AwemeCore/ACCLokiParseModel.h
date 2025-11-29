@class NSString;

@interface ACCLokiParseModel : ACCParseModel

@property (retain, nonatomic) NSString *effectID;
@property (retain, nonatomic) NSString *resourceID;
@property (retain, nonatomic) NSString *panel;

+ (id)parseModelFromParameters:(id)a0;
+ (BOOL)checkParseModelValid:(id)a0;
+ (id)parseModelFromParser:(id)a0;

- (void).cxx_destruct;

@end
