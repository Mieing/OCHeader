@class NSString, NSMutableArray, NSMutableSet;

@interface ReaderReporter : NSObject

@property (nonatomic) unsigned int enterTime;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) long long enterScene;
@property (retain, nonatomic) NSString *usrName;
@property (nonatomic) BOOL isServiceBrand;
@property (nonatomic) unsigned int addContactScene;
@property (nonatomic) unsigned int isCurrentPluginReport;
@property (nonatomic) double curOffset;
@property (retain, nonatomic) NSMutableArray *reportItems;
@property (retain, nonatomic) NSMutableSet *reportTitiles;
@property (retain, nonatomic) NSMutableSet *reportItemSet;

+ (id)sharedInstance;
+ (BOOL)isOrderGuideMsgWithContact:(id)a0;
+ (void)reportTXNewsBoxAction:(unsigned long long)a0 withMsg:(id)a1;

- (id)init;
- (void)onTableDidScrollWithOffset:(double)a0;
- (void)checkShowWithText:(id)a0 ReadersWraps:(id)a1 readerSubtype:(unsigned int)a2;
- (BOOL)hadShowTitle:(id)a0 WithReaders:(id)a1;
- (void)onHideTitle:(id)a0 Readers:(id)a1 readerSubtype:(unsigned int)a2;
- (void)onShowTitle:(id)a0 Readers:(id)a1 readerSubtype:(unsigned int)a2;
- (void)reportShowInfo;
- (void)doReportServiceBrandMsgMsgExpose;
- (BOOL)isMsgReportTypeValid:(unsigned long long)a0;
- (unsigned long long)getReportMsgType:(id)a0;
- (BOOL)neddReportMsg:(id)a0;
- (void)doServiceMsgClickReportIfNeed:(id)a0 isSender:(BOOL)a1;
- (void)doServiceMsgClickReportIfNeed:(id)a0 contact:(id)a1;
- (void)doServiceMsgClickReportIfNeed:(id)a0 contact:(id)a1 uiReaderIndex:(unsigned int)a2;
- (void)addToServiceMsgExposeReportIfNeed:(id)a0 contact:(id)a1 postion:(long long)a2;
- (id)getBizServiceMsgReportItem:(id)a0 contact:(id)a1 postion:(long long)a2 isExpose:(BOOL)a3 uiReaderIndex:(unsigned int)a4;
- (void)onEnterSessionWithContact:(id)a0 enterScene:(long long)a1;
- (void)onExitSessionWithContact:(id)a0 enterScene:(long long)a1;
- (void)onMenuClickWithMenuid:(id)a0;
- (void)reportSendMessageIfNeeded:(id)a0 usrName:(id)a1;
- (void)reportBrandPluginTemplateMsgOp:(unsigned int)a0;
- (void)reportBrandPluginTemplateMsg:(id)a0;
- (void).cxx_destruct;

@end
