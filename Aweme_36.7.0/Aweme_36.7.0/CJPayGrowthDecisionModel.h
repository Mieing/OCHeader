@class NSDictionary, NSMutableDictionary, NSError;

@interface CJPayGrowthDecisionModel : NSObject

@property (copy, nonatomic) NSDictionary *responseCommonParams;
@property (retain, nonatomic) NSMutableDictionary *retainContactToDataDict;
@property (copy, nonatomic) NSDictionary *exts;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isSuccess;

- (void).cxx_destruct;
- (void)clearModel;

@end
