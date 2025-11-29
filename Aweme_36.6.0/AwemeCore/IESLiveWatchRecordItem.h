@class NSString, NSDictionary;

@interface IESLiveWatchRecordItem : NSObject

@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned long long traceScene;
@property (nonatomic) unsigned long long lastScene;
@property (nonatomic) double startTime;
@property (nonatomic) double totalTime;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL disAppear;

- (void)tempCalculate;
- (void).cxx_destruct;

@end
