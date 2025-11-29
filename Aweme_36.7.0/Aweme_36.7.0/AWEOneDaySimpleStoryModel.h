@class NSNumber, NSString;

@interface AWEOneDaySimpleStoryModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSString *storyID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
