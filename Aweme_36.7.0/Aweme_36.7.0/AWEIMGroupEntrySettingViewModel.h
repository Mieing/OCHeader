@class NSArray;

@interface AWEIMGroupEntrySettingViewModel : NSObject

@property (copy, nonatomic) NSArray *entrySettingModels;
@property (copy, nonatomic) NSArray *entryLimitModels;
@property (nonatomic) long long sectionsCount;

- (void)configWithGroupEntrySettingMenuModel:(id)a0 nonLimitContext:(id)a1;
- (void)configWithGroupEntrySettingMenuModel:(id)a0 groupManagementInfo:(id)a1 conversation:(id)a2;
- (long long)sectionModelTypeAtIndex:(unsigned long long)a0;
- (long long)numberOfRowsInEntrySettingModel:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)modelAtIndexPath:(unsigned long long)a0;

@end
