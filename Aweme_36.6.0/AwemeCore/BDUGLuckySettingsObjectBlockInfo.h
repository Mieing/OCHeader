@class NSArray;

@interface BDUGLuckySettingsObjectBlockInfo : NSObject

@property (copy, nonatomic) NSArray *keyPaths;
@property (copy, nonatomic) id /* block */ block;

- (id)initWithKeyPaths:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
