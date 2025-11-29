@class NSString, NSArray, MMFinderLiveFansGroupIntroViewColorConfig;

@interface MMFinderLiveFansGroupIntroViewConfig : NSObject

@property (retain, nonatomic) NSString *iconSvgImgName;
@property (nonatomic) struct CGSize { double width; double height; } iconImageRatio;
@property (retain, nonatomic) NSString *iconHighlightSvgImgName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *pricePeriod;
@property (retain, nonatomic) NSArray *rights;
@property (nonatomic) BOOL isFree;
@property (retain, nonatomic) MMFinderLiveFansGroupIntroViewColorConfig *colorConfig;

- (void).cxx_destruct;

@end
