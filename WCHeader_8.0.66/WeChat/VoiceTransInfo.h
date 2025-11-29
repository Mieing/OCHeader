@class NSString, NSData, CMessageWrap, VoiceTimeSlice;

@interface VoiceTransInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int mesLocalId;
@property (nonatomic) long long msgServerId;
@property (nonatomic) unsigned long long msgCreateTime;
@property (retain, nonatomic) NSString *voiceId;
@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSString *translatedText;
@property (nonatomic) BOOL bAutoScrollUp;
@property (nonatomic) BOOL bAutoTranslate;
@property (nonatomic) BOOL bShowAnimation;
@property (nonatomic) BOOL showTransResult;
@property (retain, nonatomic) NSData *sliceData;
@property (retain, nonatomic) VoiceTimeSlice *timeSlice;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long translatedTime;
@property (nonatomic) unsigned long long transStartTime;
@property (nonatomic) unsigned long long fristTransTime;
@property (nonatomic) BOOL hadLocalTranslateRet;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mesLocalId;
+ (void)PBArrayAdd_msgServerId;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_sliceData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)getIdentifier;
- (void)setIdentifierParamsWithMsg:(id)a0;
- (void).cxx_destruct;

@end
