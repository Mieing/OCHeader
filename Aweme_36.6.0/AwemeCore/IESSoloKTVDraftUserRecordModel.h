@class NSString, IESSoloKTVDraftBGRecordModel, IESSoloKTVDraftAudioRecordModel, IESSoloKTVDraftMidiRecordModel;

@interface IESSoloKTVDraftUserRecordModel : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double playStartTime;
@property (nonatomic) double playEndTime;
@property (nonatomic) BOOL isUseOriginal;
@property (nonatomic) BOOL isShowMidi;
@property (nonatomic) int musicVolume;
@property (nonatomic) int voiceVolume;
@property (retain, nonatomic) NSString *effectName;
@property (retain, nonatomic) NSString *effectPath;
@property (nonatomic) float userDelay;
@property (retain, nonatomic) IESSoloKTVDraftAudioRecordModel *audio;
@property (retain, nonatomic) IESSoloKTVDraftMidiRecordModel *midi;
@property (retain, nonatomic) IESSoloKTVDraftBGRecordModel *bg;
@property (nonatomic) BOOL isFull;
@property (nonatomic) int startRow;
@property (nonatomic) int endRow;
@property (retain, nonatomic) NSString *userName;

- (void).cxx_destruct;
- (id)init;
- (double)duration;

@end
