@class NSString, AWESearchMerchandiseCommonProp, NSArray, AWEURLModel;

@interface AWESearchMerchandiseCommonInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *tagInfo;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textExtra;
@property (retain, nonatomic) NSString *textColorLight;
@property (retain, nonatomic) NSString *textColorDark;
@property (nonatomic) long long textEllipsisIndex;
@property (retain, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) AWESearchMerchandiseCommonProp *commonProp;
@property (retain, nonatomic) AWEURLModel *iconConfig;
@property (nonatomic) BOOL showArrow;
@property (retain, nonatomic) NSArray *textBoldIndexArray;
@property (nonatomic) long long pointType;
@property (copy, nonatomic) NSString *sellingPtInfo;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *subTextColor;
@property (copy, nonatomic) NSString *targetTimeStamp;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
