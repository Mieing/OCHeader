@class CMessageWrap;

@interface WCC2CPlayerReporter : WCPlayerReporter

@property (retain, nonatomic) CMessageWrap *mediaWrap;

- (id)getMD5ChatName;
- (void)customReport;
- (void).cxx_destruct;

@end
