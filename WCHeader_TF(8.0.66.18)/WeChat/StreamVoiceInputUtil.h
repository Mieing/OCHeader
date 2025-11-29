@class NSString, NSMutableDictionary, NSMutableArray;

@interface StreamVoiceInputUtil : MMUserService <IMMLanguageMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicInputType;
@property (retain, nonatomic) NSMutableArray *arrInputLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tempAudioFileFolderPath;
+ (id)tempAudioFilePath:(unsigned int)a0;
+ (BOOL)IsSupportVoiceMsgRecordTranslate;
+ (id)genVoiceId:(id)a0;
+ (id)genSessionId;
+ (float)getVoiceTransTimeoutInsec;
+ (unsigned int)getDynamicLanguageSupportType;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onLanguageChange;
- (void)registerAllInputLanguages;
- (void)addSupportInputLanguage:(unsigned int)a0 Name:(id)a1;
- (void)addSupportInputLanguage:(unsigned int)a0 Name:(id)a1 TransIcon:(id)a2 TransIconEn:(id)a3;
- (id)getSupportInputLanguages;
- (unsigned int)getVoiceInputLanguageTypeWithChatName:(id)a0;
- (void)syncVoiceInputLanguageType:(unsigned int)a0 ChatName:(id)a1;
- (unsigned int)getLastVoiceTransLanguageType;
- (void)syncLastVoiceTransLanguageType:(unsigned int)a0;
- (void).cxx_destruct;

@end
