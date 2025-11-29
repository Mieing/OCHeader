@class NSString, NSMapTable;

@interface ACCAEMultipleTrackViewModelRegisterImpl : NSObject <DVEMultipleTrackViewModelRegister>

@property (retain, nonatomic) NSMapTable *mapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerViewModel:(id)a0 forType:(unsigned long long)a1;
- (id)viewModelForType:(unsigned long long)a0;
- (id)multipleTrackViewModelMap;
- (id)currentMultipleTrackViewModel;
- (void).cxx_destruct;
- (id)init;

@end
