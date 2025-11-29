@class NSString;

@interface AWENoticeContentStructNumberInfoModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) NSString *content;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
