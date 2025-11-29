@interface IESECLiveTransitionInfo : NSObject

@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double maxPosition;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) double percent;
@property (nonatomic) BOOL animated;
@property (readonly, nonatomic) BOOL isClickActionType;

@end
