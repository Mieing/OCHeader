@class NSHashTable;

@interface IESLiveStatusDispatcher : NSObject

@property (readonly, nonatomic) NSHashTable *registers;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) unsigned long long changeStatus;

- (void)changeStatus:(unsigned long long)a0;
- (void)addRegister:(id)a0;
- (void)real_changeStatus;
- (void).cxx_destruct;

@end
