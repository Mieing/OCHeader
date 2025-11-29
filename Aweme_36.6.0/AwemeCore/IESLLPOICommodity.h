@class NSString;

@interface IESLLPOICommodity : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *bookURL;
@property (copy, nonatomic) NSString *queueURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
