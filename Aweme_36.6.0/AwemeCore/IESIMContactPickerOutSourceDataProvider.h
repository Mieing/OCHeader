@class NSString, NSArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerOutSourceDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (retain, nonatomic) NSArray *cellModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (void).cxx_destruct;

@end
