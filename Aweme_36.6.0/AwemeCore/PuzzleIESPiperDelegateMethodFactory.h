@class NSDictionary, NSMutableSet;

@interface PuzzleIESPiperDelegateMethodFactory : NSObject

@property (retain, nonatomic) NSDictionary *methodNameToClassNameDic;
@property (retain, nonatomic) NSMutableSet *retrievedMethods;

- (id)toRegisterBridgeMethodWithName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
