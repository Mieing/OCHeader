@class NSString, NSMutableArray;

@interface UpdateRoamDataReq_AppendReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roamDataKey;
@property (nonatomic) unsigned long long roamDataVersion;
@property (retain, nonatomic) NSMutableArray *appendMediaFile;
@property (nonatomic) unsigned long long appendBeginTimeUs;
@property (nonatomic) unsigned long long appendEndTimeUs;
@property (nonatomic) unsigned long long updateTimeUs;
@property (retain, nonatomic) NSString *contactName;

+ (void)initialize;

@end
