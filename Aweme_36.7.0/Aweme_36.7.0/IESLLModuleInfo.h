@class IESLLRxModule;
@protocol IESLLRxStoreProtocol;

@interface IESLLModuleInfo : NSObject

@property (retain, nonatomic) IESLLRxModule *module;
@property (weak, nonatomic) id<IESLLRxStoreProtocol> store;

- (void).cxx_destruct;

@end
