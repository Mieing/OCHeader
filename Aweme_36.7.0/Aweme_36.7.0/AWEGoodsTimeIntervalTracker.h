@class NSDictionary, NSString, NSDate;

@interface AWEGoodsTimeIntervalTracker : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *event;
@property (retain, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDictionary *otherParams;
@property (nonatomic) BOOL useable;

- (id)initWithEvent:(id)a0 params:(id)a1;
- (void)handleAPPWillEnterForeground:(id)a0;
- (void)handleAPPDidEnterBackground:(id)a0;
- (void)startTrack;
- (void)endTrack;
- (void).cxx_destruct;
- (void)dealloc;

@end
