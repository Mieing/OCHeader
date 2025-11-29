@class NSString, NSDictionary;

@interface AWECodeGenCommentUserGuideModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSDictionary *tipGuide;
@property (copy, nonatomic) NSDictionary *windowGuide;
@property (nonatomic) int freqDay;
@property (nonatomic) int freqNum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
