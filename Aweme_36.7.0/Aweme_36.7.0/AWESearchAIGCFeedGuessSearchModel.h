@class NSArray, NSString;

@interface AWESearchAIGCFeedGuessSearchModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *relatedQueryList;
@property (nonatomic) BOOL needUploadImage;
@property (copy, nonatomic) NSString *logId;

+ (id)relatedQueryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
