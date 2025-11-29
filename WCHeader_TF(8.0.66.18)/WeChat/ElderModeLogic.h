@class NSString, NSMutableArray;

@interface ElderModeLogic : NSObject <IOplogExt>

@property (retain, nonatomic) NSMutableArray *oplogInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;
+ (BOOL)isElderModeOn;
+ (BOOL)isSpecialRenderModeOn;
+ (BOOL)isTTSModeOn;
+ (BOOL)isSilentModeOn;
+ (BOOL)isHearingAidExpired;
+ (BOOL)isHearingAidOn;
+ (BOOL)isSilentModeBitOn;
+ (BOOL)allSubModeOff;
+ (void)closeElderModeIfNeed;
+ (void)setElderModeOn:(BOOL)a0;
+ (void)setSpecialRenderModeOn:(BOOL)a0;
+ (void)setTTSModeOn:(BOOL)a0;
+ (void)setHearingAidMode:(unsigned long long)a0;
+ (void)setSilentModeOn:(BOOL)a0;
+ (void)effectElderModeOn;
+ (void)refreshColorSetting;

- (void)setElderModeOn:(BOOL)a0;
- (void)setSpecialRenderModeOn:(BOOL)a0;
- (void)setTTSModeOn:(BOOL)a0;
- (void)setSilentModeOn:(BOOL)a0;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void)dataReport:(BOOL)a0 viewID:(id)a1;
- (void).cxx_destruct;

@end
