@class IESECYATAFreqControlManager, NSDictionary, NSString;

@interface IESECOrderListFreqControlManager : NSObject <IESECYATAFreqControlProvider>

@property (retain, nonatomic) IESECYATAFreqControlManager *manager;
@property (copy, nonatomic) NSDictionary *fields;
@property (nonatomic) long long maxStoreNum;
@property (readonly, copy, nonatomic) NSString *storageKey;
@property (readonly, nonatomic) long long maxStoreCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialCache;
- (void)controlFrequencyWithId:(id)a0 type:(id)a1 config:(id)a2;
- (BOOL)skipAppControlWithConfig:(id)a0;
- (id)showComponentIdWithConfig:(id)a0;
- (id)modelWithConfig:(id)a0 componentId:(id)a1;
- (BOOL)componentShouldShowWithId:(id)a0;
- (void)relocateDataFromServerToClientWithModel:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
