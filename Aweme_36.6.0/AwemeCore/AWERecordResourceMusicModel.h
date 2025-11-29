@class NSString, NSDictionary, NSError;
@protocol ACCMusicModelProtocol;

@interface AWERecordResourceMusicModel : NSObject <AWERecordResourceBaseModel>

@property (copy, nonatomic) NSString *inMusicId;
@property (copy, nonatomic) NSDictionary *inExtraRequestParams;
@property (retain, nonatomic) id<ACCMusicModelProtocol> inMusicModel;
@property (retain, nonatomic) id<ACCMusicModelProtocol> outMusicModel;
@property (nonatomic, getter=iSEffectBindMusic) BOOL effectBindMusic;
@property (nonatomic) BOOL isUseMusicIdByHasMicStautus;
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
