@class NSMutableDictionary, NSString;

@interface IESLiveGameContextNode : NSObject <IESLiveGameContextEditable>

@property (retain, nonatomic) IESLiveGameContextNode *parent;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsDictionary;
- (void)addParams:(id)a0;
- (void)removeParams:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)addChild:(id)a0;

@end
