@interface ACCCutMusicRangeChangeContext : NSObject

@property (nonatomic) struct _HTSAudioRange { double location; double length; } audioRange;
@property (nonatomic) long long changeType;

+ (id)createWithAudioRange:(struct _HTSAudioRange { double x0; double x1; })a0 changeType:(long long)a1;

@end
