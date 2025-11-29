@class NSString, JSAPIPermissionBitSet;

@interface JSFunctionDef : NSObject

@property (nonatomic) SEL funcSelector;
@property (nonatomic) long long funcType;
@property (nonatomic) unsigned long long runInWebViewType;
@property (copy, nonatomic) NSString *funcName;
@property (copy, nonatomic) JSAPIPermissionBitSet *permissionBitset;
@property (nonatomic) long long permissionByteIndex;

+ (id)FuncDefWithFunc:(id)a0 Selector:(SEL)a1 FuncType:(long long)a2 PermissionBitSet:(unsigned int)a3 RunInWebViewType:(unsigned long long)a4;
+ (id)FuncDefWithFunc:(id)a0 Selector:(SEL)a1 FuncType:(long long)a2 PermissionBitSet2:(unsigned int)a3 RunInWebViewType:(unsigned long long)a4;
+ (id)FuncDefWithFunc:(id)a0 Selector:(SEL)a1 FuncType:(long long)a2 PermissionBitSet3:(unsigned int)a3 RunInWebViewType:(unsigned long long)a4;
+ (id)FuncDefWithFunc:(id)a0 Selector:(SEL)a1 FuncType:(long long)a2 PermissionByteIndex:(long long)a3 RunInWebViewType:(unsigned long long)a4;

- (id)init;
- (void).cxx_destruct;

@end
