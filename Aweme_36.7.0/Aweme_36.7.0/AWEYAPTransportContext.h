@class NSString, NSDictionary;

@interface AWEYAPTransportContext : AWEPageContext

@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *trafficID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *pageFrom;
@property (copy, nonatomic) NSString *codeNo;
@property (copy, nonatomic) NSString *posterPosition;
@property (copy, nonatomic) NSString *originSchema;
@property (copy, nonatomic) NSDictionary *customExtra;
@property (nonatomic) BOOL isGuideLogin;
@property (nonatomic) BOOL hadShowGuide;
@property (nonatomic) BOOL isShowingTripActionPage;
@property (nonatomic) long long refreshTimestampMS;

- (void).cxx_destruct;
- (id)init;

@end
