@class NSString;
@protocol IESLLPOIGeneralWarmUpManagerProtocol;

@interface IESLLPOIGeneralWarmUpManagerAdapter : NSObject <AWEPOIGeneralWarmUpManagerProtocol>

@property (weak, nonatomic) id<IESLLPOIGeneralWarmUpManagerProtocol> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertGeneralWarmUpManager:(id)a0;

- (void)doPOIWarmUpWithParams:(id)a0;
- (void).cxx_destruct;

@end
