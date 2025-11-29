@class NSString;

@interface AWEAwemeRelatedPOIModel : AWEAwemeResponseModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tipsWord;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *trackInfo;
@property (nonatomic) BOOL priorityHighSuggestWord;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
