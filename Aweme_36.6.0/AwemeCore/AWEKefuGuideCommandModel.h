@class NSDictionary, NSNumber, NSArray;

@interface AWEKefuGuideCommandModel : AWEBaseBizConfigModel

@property (retain, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) NSNumber *seqId;
@property (retain, nonatomic) NSNumber *originUserActionId;
@property (nonatomic) BOOL closeCorrection;
@property (nonatomic) BOOL closeUICorrection;
@property (retain, nonatomic) NSArray *actions;

+ (id)actionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
