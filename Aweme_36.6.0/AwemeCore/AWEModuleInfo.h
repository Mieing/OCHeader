@class AWERxModule;
@protocol AWERxStoreProtocol;

@interface AWEModuleInfo : NSObject

@property (retain, nonatomic) AWERxModule *module;
@property (weak, nonatomic) id<AWERxStoreProtocol> store;

- (void).cxx_destruct;

@end
