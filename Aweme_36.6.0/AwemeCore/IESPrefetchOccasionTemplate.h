@class NSArray, NSMutableDictionary, NSString;

@interface IESPrefetchOccasionTemplate : NSObject <IESPrefetchConfigTemplate>

@property (retain, nonatomic) NSMutableDictionary *occasions;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)countOfNodes;
- (void)addOccasionNode:(id)a0;
- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)nodeForName:(id)a0;

@end
