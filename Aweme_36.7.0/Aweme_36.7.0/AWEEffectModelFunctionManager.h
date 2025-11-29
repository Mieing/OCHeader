@class NSString;

@interface AWEEffectModelFunctionManager : NSObject <AWEEffectModelFunctionManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setEffectCoverWithEffectID:(id)a0 itemID:(id)a1 isDelete:(BOOL)a2 completion:(id /* block */)a3;
+ (id)removeEffectCoverConfirmSheetViewWithConfirmBlock:(id /* block */)a0;
+ (id)titleActionWithTitle:(id)a0;
+ (void)requestEffectToTop:(id)a0 needTop:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestEffectToHide:(id)a0 needHide:(BOOL)a1 completion:(id /* block */)a2;


@end
