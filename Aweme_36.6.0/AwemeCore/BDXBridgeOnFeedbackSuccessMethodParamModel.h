@class NSString, NSArray;

@interface BDXBridgeOnFeedbackSuccessMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *feedbackId;
@property (copy, nonatomic) NSString *postId;
@property (retain, nonatomic) NSArray *mediaFiles;

+ (id)requiredKeyPaths;
+ (id)mediaFilesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
