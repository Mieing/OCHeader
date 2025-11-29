@class NSString, NSArray;

@interface AWEPlayVideoTranscribeResponseModel : AWEBaseApiModel

@property (nonatomic) int transcribeStatusCode;
@property (retain, nonatomic) NSString *transcribeStatusMsg;
@property (retain, nonatomic) NSArray *videoParagraphs;

+ (id)videoParagraphsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
