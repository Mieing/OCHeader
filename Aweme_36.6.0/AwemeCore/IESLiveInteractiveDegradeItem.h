@class IESLiveInteractiveDegradeState, NSString, NSArray, NSDictionary;

@interface IESLiveInteractiveDegradeItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long level;
@property (nonatomic) long long triggerTime;
@property (copy, nonatomic) NSArray *supportScenes;
@property (copy, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) IESLiveInteractiveDegradeState *excutingState;
@property (copy, nonatomic) id /* block */ degradeBlock;
@property (copy, nonatomic) id /* block */ upgradeBlock;
@property (copy, nonatomic) id /* block */ remoteAction;

- (void).cxx_destruct;
- (id)description;

@end
