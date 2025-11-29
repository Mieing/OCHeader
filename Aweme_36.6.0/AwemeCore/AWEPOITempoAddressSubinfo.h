@class NSString;

@interface AWEPOITempoAddressSubinfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *titleFontSize;
@property (copy, nonatomic) NSString *titleFontWeight;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *prefixColor;
@property (copy, nonatomic) NSString *prefixFontSize;
@property (copy, nonatomic) NSString *prefixFontWeight;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconWidth;
@property (copy, nonatomic) NSString *iconHeight;
@property (nonatomic) BOOL hasArrow;
@property (copy, nonatomic) NSString *priority;

- (void).cxx_destruct;

@end
