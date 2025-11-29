@class NSMutableDictionary, AWEPlayInteractionContext, AWEAwemeModel, NSString, NSMutableArray;
@protocol AWEPzEngineProtocol;

@interface AWEPlayInteractionComponentGlobalPriorityManager : NSObject <AWEPlayInteractionComponentGlobalPriorityManagerProtocol>

@property (retain, nonatomic) NSMutableArray *activatedComponents;
@property (retain, nonatomic) NSMutableDictionary *componentDict;
@property (retain, nonatomic) id<AWEPzEngineProtocol> feedEngine;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)activateComponentWithID:(id)a0 componentType:(id)a1 component:(id)a2;
- (BOOL)verifyActivatedComponent;
- (void)filterAvoidedComponent;
- (BOOL)containsComponentWithID:(id)a0 componentType:(id)a1 component:(id)a2;
- (BOOL)registerComponentWithID:(id)a0 componentType:(id)a1 component:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
