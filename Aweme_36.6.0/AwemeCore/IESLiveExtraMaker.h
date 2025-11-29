@class NSMutableDictionary, IESLiveLogScene;

@interface IESLiveExtraMaker : NSObject {
    NSMutableDictionary *_extraDict;
}

@property (nonatomic) long long eventStatus;
@property (retain, nonatomic) IESLiveLogScene *scene;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)addEntries:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
