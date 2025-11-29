@class EcsTrackerStep;

@interface EcsTracker : NSObject

@property (class, readonly, nonatomic) id /* block */ start;
@property (class, readonly, nonatomic) id /* block */ step;
@property (class, readonly, nonatomic) id /* block */ end;
@property (class, readonly, nonatomic) id /* block */ success;
@property (class, readonly, nonatomic) id /* block */ fail;

@property (nonatomic) long long type;
@property (readonly, nonatomic) EcsTrackerStep *step;
@property (readonly, copy, nonatomic) id /* block */ done;
@property (readonly, copy, nonatomic) id /* block */ sceneId;
@property (readonly, copy, nonatomic) id /* block */ log;
@property (readonly, copy, nonatomic) id /* block */ name;
@property (readonly, copy, nonatomic) id /* block */ extraJson;
@property (readonly, copy, nonatomic) id /* block */ sceneExtraJson;
@property (readonly, copy, nonatomic) id /* block */ print;
@property (readonly, copy, nonatomic) id /* block */ skip;
@property (readonly, copy, nonatomic) id /* block */ time;

+ (id /* block */)_createETM:(long long)a0;

- (id)init;
- (id)jsonToString:(id)a0;
- (void).cxx_destruct;

@end
