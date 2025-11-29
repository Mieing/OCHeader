@class NSString, NSDictionary, IESLiveExtraMonitorMaker, NSNumber;

@interface IESLiveMonitorMaker : NSObject {
    IESLiveExtraMonitorMaker *_extra;
}

@property (nonatomic) long long status_code;
@property (retain, nonatomic) NSString *category_1;
@property (retain, nonatomic) NSString *category_2;
@property (retain, nonatomic) NSString *category_3;
@property (retain, nonatomic) NSString *category_4;
@property (retain, nonatomic) NSString *category_5;
@property (retain, nonatomic) NSNumber *metric_duration;
@property (retain, nonatomic) NSNumber *metric_size;
@property (retain, nonatomic) NSNumber *metric_rate;
@property (retain, nonatomic) NSNumber *metric_percentage;
@property (readonly, nonatomic) NSDictionary *categoryParams;
@property (readonly, nonatomic) NSDictionary *metricParams;
@property (readonly, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
