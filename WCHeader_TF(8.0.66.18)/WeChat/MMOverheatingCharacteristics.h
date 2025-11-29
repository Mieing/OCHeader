@class NSDate;

@interface MMOverheatingCharacteristics : NSObject

@property (retain, nonatomic) NSDate *timeThatApplicationBecomedActive;
@property (retain, nonatomic) NSDate *timeThatApplicationResignedActive;
@property (retain, nonatomic) NSDate *timeThatApplicationEnteredForeground;
@property (retain, nonatomic) NSDate *timeThatApplicationEnteredBackground;
@property (retain, nonatomic) NSDate *timeThatNetworkChangedToUnreachable;
@property (readonly, nonatomic) BOOL mayBeOverheating;
@property (readonly, nonatomic) double overheatingDuration;

- (void).cxx_destruct;

@end
