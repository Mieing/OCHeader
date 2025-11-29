@interface WCProgressViewHideAction : WCProgressViewBaseAction

@property (nonatomic) BOOL needShowInfo;
@property (nonatomic) long long currentInfoType;
@property (nonatomic) unsigned long long currentDelayTimeMS;
@property (copy, nonatomic) id /* block */ currentCompletion;
@property (readonly, copy, nonatomic) id /* block */ progress;
@property (readonly, copy, nonatomic) id /* block */ text;
@property (readonly, copy, nonatomic) id /* block */ infoType;
@property (readonly, copy, nonatomic) id /* block */ delayTimeMS;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (id /* block */)block;
- (void).cxx_destruct;

@end
