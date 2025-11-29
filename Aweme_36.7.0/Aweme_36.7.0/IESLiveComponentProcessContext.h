@class NSString, NSMutableDictionary, IESLiveComponentReusePool, HTSLiveRoom;

@interface IESLiveComponentProcessContext : NSObject <IESLiveReuseParamsBridge>

@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSMutableDictionary *businessParams;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) IESLiveComponentReusePool *componentReusePool;
@property (nonatomic) long long changeSceneType;
@property (nonatomic) long long reuseState;
@property (copy, nonatomic) id /* block */ changeSceneProcessComplete;
@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) unsigned long long fromScene;
@property (readonly, nonatomic) unsigned long long toScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBusinessValue:(id)a0 forKey:(id)a1;
- (id)businessValueForKey:(id)a0;
- (void)runComplete;
- (void).cxx_destruct;
- (void)clear:(BOOL)a0;

@end
