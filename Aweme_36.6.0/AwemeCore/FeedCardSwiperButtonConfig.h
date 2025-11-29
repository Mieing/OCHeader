@class NSString, NSMutableArray;

@interface FeedCardSwiperButtonConfig : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) BOOL hasColor;
@property (retain, nonatomic) NSMutableArray *schemaArray;
@property (readonly, nonatomic) unsigned long long schemaArray_Count;
@property (copy, nonatomic) NSString *iconSvg;
@property (nonatomic) BOOL hasIconSvg;
@property (copy, nonatomic) NSString *borderWidth;
@property (nonatomic) BOOL hasBorderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) BOOL hasBorderColor;

+ (id)descriptor;

@end
