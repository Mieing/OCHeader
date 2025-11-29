@class GCOpenReportParam, NSString;

@interface GameChatVcOpenConfig : NSObject

@property (retain, nonatomic) GCOpenReportParam *reportParam;
@property (nonatomic) BOOL isInTab;
@property (nonatomic) unsigned int sourceScene;
@property (nonatomic) double tabbarHeight;
@property (nonatomic) unsigned long long selectTab;
@property (retain, nonatomic) NSString *focusMsgId;

+ (id)gameChatVcOpenConfigWithIsInTab:(BOOL)a0 tabbarHeight:(double)a1 reportParam:(id)a2 sourceScene:(unsigned int)a3;

- (void).cxx_destruct;

@end
