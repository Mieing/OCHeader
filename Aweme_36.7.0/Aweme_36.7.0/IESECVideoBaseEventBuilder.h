@class NSString, NSMutableDictionary;

@interface IESECVideoBaseEventBuilder : NSObject <IESECVideoEventBuilderProtocol> {
    NSString *_moduleName;
    NSString *_scriptMethodName;
    NSString *_eventName;
    NSString *_sceneName;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scriptMethodName;
- (id)initWithModuleName:(long long)a0 scriptMethodName:(id)a1 eventName:(id)a2 sceneName:(id)a3;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (id)event;
- (id)parameters;
- (id)moduleName;
- (id)sceneName;
- (void)setParameter:(id)a0 forKey:(id)a1;

@end
