@class NSString;
@protocol AWEAlertContextTrackProtocol;

@interface AWEMRAlertMigrateTrackTask : NSObject

@property (retain, nonatomic) id<AWEAlertContextTrackProtocol> alertContext;
@property (nonatomic) double shownStamp;
@property (retain, nonatomic) NSString *taskName;

- (void).cxx_destruct;

@end
