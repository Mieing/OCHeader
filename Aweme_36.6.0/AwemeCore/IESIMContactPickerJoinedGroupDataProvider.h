@class NSString, NSMutableSet, NSArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerJoinedGroupDataProvider : NSObject <IESIMContactPickerContentDataProvider, IESIMContactDataProviderLoadMoreAble>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSMutableSet *cidSet;
@property (retain, nonatomic) NSArray *itemViewModels;
@property (nonatomic) long long nextCursor;
@property (copy, nonatomic) id /* block */ groupFilterBlock;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMore;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
