@class NSArray, NSString, RxCollectionViewDiffableDataSource;
@protocol IESIMGroupChatSharePanelDataSourceModelProtocol;

@interface AWEIMGroupChatSharePanelDataSource : NSObject <IESIMGroupChatSharePanelDataSourceProtocol>

@property (readonly, nonatomic) RxCollectionViewDiffableDataSource *configDataSource;
@property (copy, nonatomic) NSArray *potentialSections;
@property (readonly, nonatomic) RxCollectionViewDiffableDataSource *internal;
@property (readonly, nonatomic) id<IESIMGroupChatSharePanelDataSourceModelProtocol> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__createComponents;
- (void)renderModel:(id)a0;
- (void)__prepareComponents;
- (void)__prepareTranspondShareModels;
- (void)__prepareConfigCollectionViewData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;

@end
