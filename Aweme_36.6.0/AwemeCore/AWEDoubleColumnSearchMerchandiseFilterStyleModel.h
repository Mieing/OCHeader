@class NSString, AWEDoubleColumnSearchMerchandiseActivityIcon, NSArray;

@interface AWEDoubleColumnSearchMerchandiseFilterStyleModel : AWEBaseApiModel

@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *defaultHeadIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectingHeadIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectedHeadIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *defaultTailIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *ascendingTailIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *descendingTailIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectingTailIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectedTailIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *defaultTextIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectingTextIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectedTextIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectedLeftBgIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *defaultLeftBgIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *selectedRightBgIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *defaultRightBgIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *image;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *toImage;
@property (copy, nonatomic) NSString *selectedLeftTextColor;
@property (copy, nonatomic) NSString *defaultLeftTextColor;
@property (copy, nonatomic) NSString *selectedLeftPostscriptTextColor;
@property (copy, nonatomic) NSString *defaultLeftPostscriptTextColor;
@property (copy, nonatomic) NSString *selectedRightTextColor;
@property (copy, nonatomic) NSString *defaultRightTextColor;
@property (copy, nonatomic) NSString *selectedEndTimeBgColor;
@property (copy, nonatomic) NSString *defaultEndTimeBgColor;
@property (copy, nonatomic) NSString *selectedRightPostscriptTextColor;
@property (copy, nonatomic) NSString *defaultRightPostscriptTextColor;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *toFormat;
@property (nonatomic) long long count;
@property (nonatomic) long long range;
@property (nonatomic) double pattern;
@property (nonatomic) double textSize;
@property (copy, nonatomic) NSString *defaultTextColor;
@property (copy, nonatomic) NSString *selectedTextColor;
@property (copy, nonatomic) NSString *selectingTextColor;
@property (copy, nonatomic) NSString *defaultHeadTextColor;
@property (copy, nonatomic) NSString *selectedHeadTextColor;
@property (copy, nonatomic) NSString *defaultTailTextColor;
@property (copy, nonatomic) NSString *selectedTailTextColor;
@property (copy, nonatomic) NSString *dateHintColor;
@property (copy, nonatomic) NSString *dateColor;
@property (copy, nonatomic) NSString *defaultPostscriptTextColor;
@property (copy, nonatomic) NSString *selectedPostscriptTextColor;
@property (copy, nonatomic) NSString *defaultBorderColor;
@property (copy, nonatomic) NSString *selectedBorderColor;
@property (copy, nonatomic) NSString *defaultBgColor;
@property (copy, nonatomic) NSString *selectedBgColor;
@property (copy, nonatomic) NSString *selectingBgColor;
@property (copy, nonatomic) NSString *selectedHeadLineColor;
@property (retain, nonatomic) NSArray *listBGColor;
@property (nonatomic) double tailIconLeftMargin;

+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (void).cxx_destruct;

@end
