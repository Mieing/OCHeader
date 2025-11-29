@class NSString, NSDictionary;

@interface AWEDCFeedBottomTabDataModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSDictionary *data;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
