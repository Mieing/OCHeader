@class NSMutableArray;

@interface IESECShopPopupManager : NSObject

@property (retain, nonatomic) NSMutableArray *tasks;

- (void)triggerPopupShow:(unsigned long long)a0;
- (void)triggerPopupShow:(unsigned long long)a0 fromContinue:(BOOL)a1 skip:(BOOL)a2;
- (id)findTaskByPriority:(unsigned long long)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
