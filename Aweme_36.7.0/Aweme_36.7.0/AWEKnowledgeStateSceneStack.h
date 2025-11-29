@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEKnowledgeStateSceneStack : NSObject

@property (retain, nonatomic) NSMutableArray *stackArray;
@property (retain, nonatomic) NSMutableDictionary *lookupDictionary;
@property (copy, nonatomic) NSString *stackToken;

- (BOOL)pushForScene:(id)a0;
- (id)findSceneForToken:(id)a0;
- (id)pop;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)top;

@end
