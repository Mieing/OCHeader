@class NSArray, NSString;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerFTSSearchDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) id /* block */ filter;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (copy, nonatomic) NSArray *searchTypes;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)getSearchResultWithKeyword:(id)a0;
- (id)initWithFilter:(id /* block */)a0 includeUser:(BOOL)a1 includeConversation:(BOOL)a2;
- (id)p_configShareModel:(id)a0 withResultData:(id)a1;
- (void).cxx_destruct;

@end
