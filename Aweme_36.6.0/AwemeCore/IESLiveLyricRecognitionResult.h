@class IESLiveKTVLyricRecognitionResultModel, NSString, IESLiveInteractionCropData, HTSInteractionStreamAppData, NSDictionary, NSLock;

@interface IESLiveLyricRecognitionResult : NSObject <IESLiveSEIParser, IESLiveSEIParserResult>

@property (retain, nonatomic) IESLiveKTVLyricRecognitionResultModel *model;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (retain, nonatomic) IESLiveInteractionCropData *cropData;
@property (retain, nonatomic) NSDictionary *metaSEI;
@property (nonatomic) unsigned long long seiType;
@property (nonatomic) unsigned long long seiMode;
@property (nonatomic) BOOL immidiately;

+ (void)ieslivekit_register_sei_parser;

- (id)seiRootKey;
- (BOOL)checkTypeConditionWithMetaSEI:(id)a0;
- (id)parserMetaSEI:(id)a0;
- (unsigned long long)supportSEIModes;
- (void).cxx_destruct;
- (id)init;

@end
