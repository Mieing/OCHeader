@class NSString;

@interface AWEVideoRelatedFirstFrameTrackerManager : NSObject <AWEVideoRelatedFirstFrameTrackerManagerService>

@property (nonatomic) double clickStartTimestamp;
@property (nonatomic) double requestStartTimestamp;
@property (nonatomic) double responseBackTimestamp;
@property (nonatomic) double coverShownTimestamp;
@property (nonatomic) unsigned long long dataFrom;
@property (nonatomic) long long requestStatus;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long coverStatus;
@property (nonatomic) BOOL currentVCHasReported;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isDoubleColumn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)markFirstFrameReady;
- (void).cxx_destruct;

@end
