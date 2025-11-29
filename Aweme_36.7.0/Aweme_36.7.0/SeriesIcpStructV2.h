@class NSString, SeriesIcpPosStructV2;

@interface SeriesIcpStructV2 : GPBMessage

@property (retain, nonatomic) SeriesIcpPosStructV2 *horizonalPos;
@property (nonatomic) BOOL hasHorizonalPos;
@property (retain, nonatomic) SeriesIcpPosStructV2 *verticalPos;
@property (nonatomic) BOOL hasVerticalPos;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) BOOL hasFontColor;
@property (nonatomic) int fontSize;
@property (nonatomic) BOOL hasFontSize;
@property (nonatomic) int startTimeSec;
@property (nonatomic) BOOL hasStartTimeSec;
@property (nonatomic) int disappearTimeSec;
@property (nonatomic) BOOL hasDisappearTimeSec;
@property (copy, nonatomic) NSString *icpNumber;
@property (nonatomic) BOOL hasIcpNumber;
@property (retain, nonatomic) SeriesIcpPosStructV2 *cardPos;
@property (nonatomic) BOOL hasCardPos;
@property (copy, nonatomic) NSString *icpNumberSplit;
@property (nonatomic) BOOL hasIcpNumberSplit;
@property (nonatomic) int cardFontSize;
@property (nonatomic) BOOL hasCardFontSize;

+ (id)descriptor;

@end
