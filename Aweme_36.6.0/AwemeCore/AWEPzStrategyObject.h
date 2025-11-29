@class NSString, AWEPzStrategyConfig;
@protocol AWEPzStrategyProtocol;

@interface AWEPzStrategyObject : NSObject

@property (retain, nonatomic) id<AWEPzStrategyProtocol> strategy;
@property (readonly, copy, nonatomic) NSString *strategyID;
@property (readonly, copy, nonatomic) NSString *strategyType;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long executePriority;
@property (retain, nonatomic) AWEPzStrategyConfig *strategyConfig;
@property (nonatomic) BOOL needConsumePzDBRecord;
@property (nonatomic) BOOL canSubThreadExecute;
@property (nonatomic) BOOL dynamicExecuteInSubThread;

- (void).cxx_destruct;
- (id)description;

@end
