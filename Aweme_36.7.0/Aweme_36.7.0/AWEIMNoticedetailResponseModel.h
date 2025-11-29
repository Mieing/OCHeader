@class NSMutableArray;

@interface AWEIMNoticedetailResponseModel : IESIMBaseApiModel

@property (retain, nonatomic) NSMutableArray *noticeList;

+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
