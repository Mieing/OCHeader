@class NSString;

@interface MsgImgDelayEntryReporter : NSObject {
    BOOL _hasNotifyDetectResult;
}

@property (nonatomic) unsigned int accessType;
@property (nonatomic) unsigned long long openTimeMs;
@property (nonatomic) unsigned long long exposeTimeMs;
@property (nonatomic) unsigned long long clickTimeMs;
@property (nonatomic) unsigned long long clickRstTimeMs;
@property (nonatomic) unsigned long long exposeResult;
@property (nonatomic) unsigned long long detectBitSet;
@property (nonatomic) unsigned int clickResult;
@property (nonatomic) unsigned int entryType;
@property (readonly, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *imgId;
@property (nonatomic) unsigned int validWordRate;
@property (nonatomic) BOOL translateFromFastEntry;
@property (nonatomic) BOOL translateFromMenu;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int uiSessionID;

- (void)dealloc;
- (void)reportLastInfo;
- (void)reset;
- (void)reportDetectResult;
- (void)reportClick;
- (unsigned int)formatDetectResult;
- (unsigned int)formatExposeResult;
- (void)onOpenImg:(unsigned int)a0;
- (void)onExposeResult:(unsigned long long)a0;
- (void)onDetectResult:(unsigned long long)a0;
- (void)onClickWithEntryType:(unsigned int)a0;
- (void)onClickResult:(BOOL)a0;
- (void)onDetectWordRate:(double)a0;
- (void).cxx_destruct;

@end
