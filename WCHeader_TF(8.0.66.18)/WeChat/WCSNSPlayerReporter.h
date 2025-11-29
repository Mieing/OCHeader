@class WCMediaItem, NSString;

@interface WCSNSPlayerReporter : WCPlayerReporter

@property (retain, nonatomic) WCMediaItem *mediaWrap;
@property (copy, nonatomic) NSString *reqFlag;
@property (copy, nonatomic) NSString *respFlag;

- (id)getMD5PostName;
- (void)customReport;
- (void)getHdVideoExptValue:(id)a0;
- (void).cxx_destruct;

@end
