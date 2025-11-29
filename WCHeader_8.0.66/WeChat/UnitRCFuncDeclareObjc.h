@class NSString;

@interface UnitRCFuncDeclareObjc : UnitRCObjcBaseClass <UnitRCFuncDeclare>

@property (readonly, copy, nonatomic) id /* block */ Void_Empty_Block;
@property (readonly, copy, nonatomic) id /* block */ Void_Uint32Uint32String_Block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)from_Void_Empty_Block:(id /* block */)a0;
+ (id /* block */)to_Void_Empty_Block:(id)a0;
+ (id)from_Void_Uint32Uint32String_Block:(id /* block */)a0;
+ (id /* block */)to_Void_Uint32Uint32String_Block:(id)a0;

- (void)Void_Empty;
- (void)Void_Uint32Uint32String:(unsigned int)a0 errorType:(unsigned int)a1 msg:(id)a2;
- (void).cxx_destruct;

@end
