@class NSString, AWESeriesIcpPosModel;

@interface AWESeriesIcpModel : AWEBaseApiModel

@property (retain, nonatomic) AWESeriesIcpPosModel *horizonalPos;
@property (retain, nonatomic) AWESeriesIcpPosModel *verticalPos;
@property (retain, nonatomic) AWESeriesIcpPosModel *cardPos;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long cardFontSize;
@property (nonatomic) long long startTimeSec;
@property (nonatomic) long long disappearTimeSec;
@property (copy, nonatomic) NSString *icpNumber;
@property (copy, nonatomic) NSString *icpNumberSplit;

+ (id)horizonalPosJSONTransformer;
+ (id)verticalPosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
