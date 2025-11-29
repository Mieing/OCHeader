@interface EZDanmakuMutexChannel : NSObject

@property (nonatomic) long long index;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } channelRect;
@property (nonatomic) double nextAvailableTime;

@end
