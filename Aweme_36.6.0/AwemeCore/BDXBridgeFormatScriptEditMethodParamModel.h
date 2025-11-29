@class NSNumber, NSString;

@interface BDXBridgeFormatScriptEditMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *chapterIndex;
@property (copy, nonatomic) NSString *playId;
@property (copy, nonatomic) NSString *chapterContent;
@property (copy, nonatomic) NSString *chapterGoCond;
@property (nonatomic) long long action;

+ (id)requiredKeyPaths;
+ (id)actionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
