@class NSString, NSMutableArray, NewLifeRedDotTipsShowInfo;

@interface NewLifePostReportInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL fromDraft;
@property (retain, nonatomic) NSMutableArray *templateIds;
@property (retain, nonatomic) NSString *topicText;
@property (retain, nonatomic) NSString *topicId;
@property (retain, nonatomic) NSMutableArray *imageReportInfos;
@property (retain, nonatomic) NewLifeRedDotTipsShowInfo *profilePostRedDotInfo;
@property (nonatomic) unsigned int sourceEnterScene;
@property (nonatomic) int sourceEnterPage;

+ (void)initialize;

@end
