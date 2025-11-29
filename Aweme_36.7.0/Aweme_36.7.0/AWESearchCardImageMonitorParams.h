@class NSMutableDictionary, NSDate;

@interface AWESearchCardImageMonitorParams : NSObject

@property (nonatomic) long long currentViewModelIdx;
@property (retain, nonatomic) NSDate *willRenderDate;
@property (retain, nonatomic) NSDate *willDisplayDate;
@property (retain, nonatomic) NSMutableDictionary *imageTrackParams;
@property (nonatomic) BOOL disabledReport;

- (void).cxx_destruct;

@end
