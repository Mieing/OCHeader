@class NSString, NSMapTable;

@interface ACCEditBeautyEffectSRootChange : NSObject <ACCEditBeautyEffectDDDataChange>

@property (retain, nonatomic) NSMapTable *changes;
@property (retain, nonatomic) NSMapTable *keypathChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKeyPath:(id)a0;
- (id)data:(id)a0 objectForKeypath:(id)a1;
- (void)enumerateChangeUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
