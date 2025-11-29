@class NSString;

@interface AWECodeGenContentTextFormatModel : AWEBaseDataModel

@property (nonatomic) long long textType;
@property (nonatomic) int start;
@property (nonatomic) int end;
@property (nonatomic) int textSize;
@property (copy, nonatomic) NSString *textColorLight;
@property (copy, nonatomic) NSString *textColorDark;
@property (copy, nonatomic) NSString *backgroundColorLight;
@property (copy, nonatomic) NSString *backgroundColorDark;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
