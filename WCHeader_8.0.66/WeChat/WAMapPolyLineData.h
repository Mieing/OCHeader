@class UIColor, UIImage;

@interface WAMapPolyLineData : NSObject

@property (nonatomic) long long lineId;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double width;
@property (nonatomic) BOOL dotLine;
@property (nonatomic) BOOL arrowLine;
@property (nonatomic) BOOL enableGradient;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIImage *arrowImg;
@property (nonatomic) long long style;
@property (nonatomic) double symbolGap;
@property (nonatomic) long long displayLevel;

- (void).cxx_destruct;

@end
