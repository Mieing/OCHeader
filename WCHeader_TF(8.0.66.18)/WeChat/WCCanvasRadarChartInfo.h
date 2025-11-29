@class NSString, NSArray;

@interface WCCanvasRadarChartInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *coverColor;
@property (retain, nonatomic) NSString *borderImg;
@property (retain, nonatomic) NSString *maskImg;
@property (retain, nonatomic) NSArray *itemList;
@property (retain, nonatomic) NSString *labelFontColor;
@property (retain, nonatomic) NSString *scoreFontColor;
@property (nonatomic) double labelFontSize;
@property (nonatomic) double scoreFontSize;
@property (nonatomic) double borderImgWidth;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
