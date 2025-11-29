@class NSString, AWENoticeActionBarIconURLModel, NSDictionary, AWENoticeActionBarThemeColorModel;

@interface AWENoticeActionBarModel : AWEBaseApiModel

@property (nonatomic) long long actionBarType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWENoticeActionBarThemeColorModel *backgroundColorModel;
@property (retain, nonatomic) AWENoticeActionBarThemeColorModel *textColorModel;
@property (retain, nonatomic) AWENoticeActionBarIconURLModel *icon;
@property (copy, nonatomic) NSDictionary *extraDict;

+ (id)iconJSONTransformer;
+ (id)backgroundColorModelJSONTransformer;
+ (id)textColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
