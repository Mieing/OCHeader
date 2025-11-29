@class NSString, NSArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerRecentShareDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (nonatomic) BOOL needHideMyself;
@property (retain, nonatomic) NSArray *recentContacts;
@property (nonatomic) BOOL useTranspondShareData;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)getShareModels;
- (void)__log:(id)a0;
- (void)__fetchData;
- (id)initWithFilterOption:(unsigned long long)a0;
- (id)__fetchDataNew;
- (void).cxx_destruct;

@end
