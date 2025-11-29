@class NSString, NSArray, AWENoticeContentStructNumberInfoModel;

@interface AWENoticeContentStructModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSArray *texts;
@property (retain, nonatomic) AWENoticeContentStructNumberInfoModel *numberInfoModel;

+ (id)textsJSONTransformer;
+ (id)numberInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
