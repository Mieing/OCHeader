@class NSArray, NSDictionary, NSString, IESEffectModel, NSError;
@protocol ACCMusicModelProtocol;

@interface AWERecordResourceEffectModel : NSObject <AWERecordResourceBaseModel>

@property (retain, nonatomic) NSArray *inEffectIds;
@property (retain, nonatomic) NSArray *inEffectModels;
@property (retain, nonatomic) NSArray *inBindEffect;
@property (retain, nonatomic) NSDictionary *inExtraParams;
@property (copy, nonatomic) NSString *inGradeKey;
@property (nonatomic) BOOL outIsAigcStciker;
@property (retain, nonatomic) IESEffectModel *outCurrentEffect;
@property (retain, nonatomic) IESEffectModel *outparentEffect;
@property (retain, nonatomic) NSArray *outAllEffect;
@property (retain, nonatomic) NSArray *outBindEffect;
@property (nonatomic) BOOL outHasBindMusic;
@property (retain, nonatomic) id<ACCMusicModelProtocol> outEffectBindMusicModel;
@property (readonly, nonatomic) unsigned long long taskType;
@property (retain, nonatomic) NSError *outError;
@property (nonatomic) BOOL outSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inputParameterIsValid;
- (void).cxx_destruct;

@end
