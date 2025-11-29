@interface MMCreateLiteAppStoreCallbackInfo : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) unsigned int time;
@property (nonatomic) unsigned int aliveSeconds;

- (void).cxx_destruct;

@end
