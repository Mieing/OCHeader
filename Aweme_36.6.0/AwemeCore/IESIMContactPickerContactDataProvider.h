@class NSString, NSArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerContactDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (nonatomic) BOOL needHideMyself;
@property (retain, nonatomic) NSArray *allContacts;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)getShareModels;
- (void)__log:(id)a0;
- (id)__fetchData;
- (id)__getContactUsers;
- (id)initWithFilterOption:(unsigned long long)a0;
- (void).cxx_destruct;

@end
