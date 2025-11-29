@class NSString;

@interface WCTopicTipActionReportItem : NSObject

@property (retain, nonatomic) NSString *requestid;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) int actiontype;
@property (nonatomic) int pagetype;
@property (retain, nonatomic) NSString *appid;

- (void)setReportScene:(long long)a0;
- (void).cxx_destruct;

@end
