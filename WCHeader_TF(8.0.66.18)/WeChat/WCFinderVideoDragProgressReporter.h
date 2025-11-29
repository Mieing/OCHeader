@class NSString;

@interface WCFinderVideoDragProgressReporter : NSObject

@property (nonatomic) int commentScene;
@property (nonatomic) BOOL isPcr90;
@property (nonatomic) BOOL isPause;
@property (nonatomic) double timePointBeforeDpb;
@property (nonatomic) double timePointAfterDpb;
@property (nonatomic) long long screenType;
@property (nonatomic) BOOL isDrag;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) double videoDurationTime;
@property (nonatomic) unsigned long long dragStyle;

- (void)report;
- (void).cxx_destruct;

@end
