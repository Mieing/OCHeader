@class NSString, NSMutableDictionary, NSDictionary;

@interface WCFinderRoutineReportInfo : NSObject

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSMutableDictionary *actionValueDict;
@property (nonatomic) long long actionValue;
@property (nonatomic) unsigned long long actionTimestamp;
@property (nonatomic) unsigned long long mediaType;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned long long videoDurationTime;
@property (nonatomic) unsigned long long firstVideoDataSource;
@property (nonatomic) int readType;
@property (copy, nonatomic) NSString *longVideoId;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) unsigned long long exposeTimes;
@property (copy, nonatomic) NSDictionary *feedClientInfo;
@property (copy, nonatomic) NSString *fromContextId;
@property (nonatomic) BOOL isADFlag;

- (id)reportInfoStr;
- (id)getReportJsonFormatStringWithDictionary:(id)a0;
- (id)getJsonFormatStringWithDictionary:(id)a0;
- (id)replaceCommaToSemicolon:(id)a0;
- (void).cxx_destruct;

@end
