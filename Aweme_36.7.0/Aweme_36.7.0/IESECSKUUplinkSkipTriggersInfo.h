@class NSArray;

@interface IESECSKUUplinkSkipTriggersInfo : NSObject

@property (retain, nonatomic) NSArray *globalSkipTriggers;
@property (retain, nonatomic) NSArray *moduleSkipTriggers;

- (id)triggerDataWithModuleName:(id)a0 triggers:(id)a1;
- (id)tiggersFromData:(id)a0;
- (id)initWithGlobalTriggers:(id)a0 moduleTriggers:(id)a1;
- (void).cxx_destruct;

@end
