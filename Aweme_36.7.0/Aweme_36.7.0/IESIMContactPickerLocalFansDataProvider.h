@class NSString;
@protocol IESIMContactLocalSearchManagerProtocol, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerLocalFansDataProvider : IESIMContactPickerContactDataProvider <IESIMContactPickerContentDataProvider>

@property (retain, nonatomic) id<IESIMContactLocalSearchManagerProtocol> searchManager;
@property (nonatomic) unsigned long long filterOption;
@property (nonatomic) BOOL needHideMyself;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCellViewModels;
- (id)getSearchResultWithKeyword:(id)a0;
- (id)initWithFilterOption:(unsigned long long)a0;
- (void).cxx_destruct;

@end
