@class NSArray;

@interface AWEPlayVideoTranscribeResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *videoParagraphs;

+ (id)videoParagraphsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
