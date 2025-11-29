@class NSString, NSMutableDictionary, NSMutableArray;

@interface WCFinderAdReportInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *clickPosMap;
@property (copy, nonatomic) NSString *expReportLink;
@property (copy, nonatomic) NSString *clkReportLink;
@property (retain, nonatomic) NSMutableDictionary *reportInfo;
@property (copy, nonatomic) NSString *feedbackUrl;
@property (nonatomic) unsigned long long originExposeTimeStamp;
@property (nonatomic) unsigned long long viewableExposeTimeStamp;
@property (retain, nonatomic) NSMutableArray *feedbackInfoArray;
@property (nonatomic) BOOL hasReportAction;
@property (nonatomic) unsigned long long lastReportActionTimeStamp;

- (id)initWithAdEntryView:(id)a0 onPosition:(unsigned long long)a1;
- (void)initFuncParamsWithAdEntryView:(id)a0 onPosition:(unsigned long long)a1;
- (void).cxx_destruct;

@end
