@class NSString;

@interface AWESeachSimpleSuggestModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordId;
@property (copy, nonatomic) NSString *replayID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
