@class NSDictionary, NSString;

@interface AWEPOIGoodsDetailCollectGuideInfo : NSObject

@property (retain, nonatomic) NSDictionary *collectGuideInfo;
@property (nonatomic) double showTime;
@property (nonatomic) long long poiTriggerTimes;
@property (nonatomic) long long guideType;
@property (copy, nonatomic) NSString *guideText;
@property (retain, nonatomic) NSDictionary *guideFrequencyMap;
@property (retain, nonatomic) NSDictionary *sortRuleGuide;
@property (nonatomic) long long crossPoi;
@property (nonatomic) long long xDay;
@property (nonatomic) long long yTime;
@property (nonatomic) long long stillShowBubble;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
