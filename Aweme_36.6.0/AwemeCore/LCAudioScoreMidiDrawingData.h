@class NSString;

@interface LCAudioScoreMidiDrawingData : NSObject <IESLiveKTVAudioScoreData>

@property (nonatomic) int pitch;
@property (nonatomic) int start;
@property (nonatomic) int duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int pitch;
@property (nonatomic) int start;
@property (nonatomic) int duration;


@end
