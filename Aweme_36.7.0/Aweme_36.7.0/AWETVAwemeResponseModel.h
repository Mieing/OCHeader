@class NSArray, NSString;

@interface AWETVAwemeResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *streamList;
@property (retain, nonatomic) NSString *debugInfo;

+ (id)streamListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
