@interface AWEAudioClipRangeChangeResultModel : NSObject

@property (nonatomic) struct _HTSAudioRange { double location; double length; } range;
@property (nonatomic) long long changeType;
@property (nonatomic) long long repeatCount;

@end
