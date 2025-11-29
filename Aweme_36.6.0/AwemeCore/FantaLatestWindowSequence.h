@class NSMutableDictionary, NSString, FantaFeatureSequence, NSMutableArray;

@interface FantaLatestWindowSequence : NSObject <FantaFeatureSequenceProtocol>

@property (weak, nonatomic) FantaFeatureSequence *delegateSequence;
@property (retain, nonatomic) NSMutableArray *windowSequenceItemIDList;
@property (retain, nonatomic) NSMutableDictionary *windowSequenceItemFeatureMap;
@property (retain, nonatomic) NSMutableDictionary *windowSequenceItemStateMap;
@property (nonatomic) long long maxWindowSequenceLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)limitSequenceLength;
- (id)initWithDelegateSequence:(id)a0;
- (void)createItemIfNeededWithItemID:(id)a0 context:(id)a1;
- (id)stateForItem:(id)a0;
- (id)featureModelForItem:(id)a0;
- (void)updateFeature:(id)a0 forKey:(id)a1 item:(id)a2 context:(id)a3;
- (id)featureForKey:(id)a0 item:(id)a1 context:(id)a2;
- (void).cxx_destruct;

@end
