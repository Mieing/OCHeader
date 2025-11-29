@class NSString, NSArray, NSDictionary;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerUserDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (copy, nonatomic) NSArray *stickOnTopUidArray;
@property (copy, nonatomic) NSArray *stickOnTopUserArray;
@property (nonatomic) BOOL hasStickOnTopUser;
@property (copy, nonatomic) NSDictionary *userExt;
@property (nonatomic) BOOL needHideMyself;
@property (nonatomic) unsigned long long filterOption;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithContext:(id)a0 filterOption:(unsigned long long)a1;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (void)__log:(id)a0;
- (id)__fetchData;
- (id)initWithUidArray:(id)a0 userArray:(id)a1 userExt:(id)a2 filterOption:(unsigned long long)a3;
- (void)addUid:(id)a0;
- (void).cxx_destruct;

@end
