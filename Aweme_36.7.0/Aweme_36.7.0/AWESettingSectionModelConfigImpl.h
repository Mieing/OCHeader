@class NSString, AWESettingSectionModel;

@interface AWESettingSectionModelConfigImpl : NSObject <AWESettingSectionModelBizAbilityProtocol>

@property (weak, nonatomic) AWESettingSectionModel *weakObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)configInit;

- (void)onSetItemArray:(id)a0;
- (void).cxx_destruct;

@end
