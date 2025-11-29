@class NSArray, NSMutableDictionary, NSString;

@interface IESPrefetchAPITemplate : NSObject <IESPrefetchConfigTemplate>

@property (retain, nonatomic) NSMutableDictionary *apis;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAPINode:(id)a0;
- (unsigned long long)countOfNodes;
- (id)apiNodeForName:(id)a0;
- (id)paramsOfValue:(id)a0 dataType:(unsigned long long)a1;
- (id)buildParamsOfNode:(id)a0 withSchema:(id)a1 variables:(id)a2 percentEscapes:(BOOL)a3;
- (id)paramsOfNode:(id)a0 withSchema:(id)a1 variables:(id)a2 percentEscapes:(BOOL)a3;
- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
