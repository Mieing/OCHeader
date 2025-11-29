@class NSString;

@interface AiChatOpenInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int aiChatOpen;
@property (nonatomic) unsigned int pollInterval;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *stringBizuin;
@property (retain, nonatomic) NSString *roomInfo;
@property (retain, nonatomic) NSString *reportExtInfo;

+ (void)initialize;

- (void)setReportExtInfo:(id)a0;
- (id)reportExtInfo;
- (void)setRoomInfo:(id)a0;
- (id)roomInfo;
- (void)setStringBizuin:(id)a0;
- (id)stringBizuin;
- (void)setExtInfo:(id)a0;
- (id)extInfo;
- (void)setPollInterval:(unsigned int)a0;
- (unsigned int)pollInterval;
- (void)setAiChatOpen:(unsigned int)a0;
- (unsigned int)aiChatOpen;

@end
