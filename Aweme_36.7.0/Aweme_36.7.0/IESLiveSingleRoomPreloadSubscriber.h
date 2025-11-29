@class NSString;

@interface IESLiveSingleRoomPreloadSubscriber : NSObject

@property (retain, nonatomic) NSString *businessIndex;
@property (copy, nonatomic) id /* block */ stateChangeCallback;

- (void)notifyWithEntity:(id)a0 stage:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)clear;

@end
