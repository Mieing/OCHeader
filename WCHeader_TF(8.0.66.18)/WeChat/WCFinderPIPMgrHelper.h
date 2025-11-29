@class NSString, NSMutableDictionary;

@interface WCFinderPIPMgrHelper : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *timeDic;
@property (nonatomic) double startTotalPlaybackTime;
@property (nonatomic) double currentTotalPlaybackTime;
@property (nonatomic) BOOL hasReportedBackground;
@property (nonatomic) BOOL hasReportedForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setStartTime:(double)a0;
- (void)resetTotalTime;
- (void)addTotalTime:(double)a0 tid:(id)a1;
- (void).cxx_destruct;

@end
