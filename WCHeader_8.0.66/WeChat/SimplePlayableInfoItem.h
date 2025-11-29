@class MMListenSimplePlayableInfo, RingTone;

@interface SimplePlayableInfoItem : NSObject

@property (retain, nonatomic) MMListenSimplePlayableInfo *info;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) RingTone *ringtone;

- (void).cxx_destruct;

@end
