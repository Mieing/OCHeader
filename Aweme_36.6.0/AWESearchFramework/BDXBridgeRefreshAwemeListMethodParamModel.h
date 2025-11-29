@class NSString, NSArray;

@interface BDXBridgeRefreshAwemeListMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSArray *awemeList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
