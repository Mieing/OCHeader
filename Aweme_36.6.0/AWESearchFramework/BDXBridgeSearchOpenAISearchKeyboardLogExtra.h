@class NSString, NSNumber;

@interface BDXBridgeSearchOpenAISearchKeyboardLogExtra : BDXBridgeModel

@property (copy, nonatomic) NSString *enterGroupId;
@property (copy, nonatomic) NSString *imprId;
@property (copy, nonatomic) NSString *logPb;
@property (copy, nonatomic) NSString *searchPosition;
@property (retain, nonatomic) NSNumber *wordsNum;
@property (copy, nonatomic) NSString *wordsSource;
@property (copy, nonatomic) NSString *trendingName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
