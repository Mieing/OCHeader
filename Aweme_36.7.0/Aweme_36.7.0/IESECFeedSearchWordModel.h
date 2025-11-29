@class NSString;

@interface IESECFeedSearchWordModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordId;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
