@class NSArray, NSString, IESLiveKTVDecorateListDataSource, IGListSectionController;

@interface IESLiveKTVDecorateDataSource : NSObject <IGListAdapterDataSource>

@property (weak, nonatomic) IESLiveKTVDecorateListDataSource *dataSource;
@property (retain, nonatomic) IGListSectionController *sectionController;
@property (retain, nonatomic) NSArray *gridItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
