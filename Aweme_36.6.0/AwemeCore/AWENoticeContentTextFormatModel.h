@class NSString;

@interface AWENoticeContentTextFormatModel : AWEBaseApiModel

@property (nonatomic) unsigned long long textType;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (nonatomic) long long textSize;
@property (copy, nonatomic) NSString *textColorLight;
@property (copy, nonatomic) NSString *textColorDark;
@property (copy, nonatomic) NSString *backgroundColorLight;
@property (copy, nonatomic) NSString *backgroundColorDark;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
