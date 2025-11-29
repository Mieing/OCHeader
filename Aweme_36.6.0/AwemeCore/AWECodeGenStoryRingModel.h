@class NSString;

@interface AWECodeGenStoryRingModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) int status;
@property (nonatomic) long long createTimeMicro;
@property (nonatomic) long long ttlTs;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
