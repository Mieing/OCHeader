@class HTSLiveContentOpenFreqCtrlParams, HTSLiveContentOpenTreasureDetail, NSMutableDictionary;

@interface HTSLiveContentOpenTreasureTouchItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveContentOpenTreasureDetail *detail;
@property (nonatomic) BOOL hasDetail;
@property (retain, nonatomic) HTSLiveContentOpenFreqCtrlParams *freqCtr;
@property (nonatomic) BOOL hasFreqCtr;
@property (nonatomic) int priority;
@property (retain, nonatomic) NSMutableDictionary *bizExtra;
@property (readonly, nonatomic) unsigned long long bizExtra_Count;

+ (id)descriptor;

@end
