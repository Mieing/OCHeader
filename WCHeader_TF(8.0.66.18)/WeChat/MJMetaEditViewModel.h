@class NSArray, MJMetaBackupInfo, MJSegmentViewModel;

@interface MJMetaEditViewModel : NSObject

@property (retain, nonatomic) NSArray *titleItems;
@property (retain, nonatomic) NSArray *contentItems;
@property (retain, nonatomic) MJSegmentViewModel *segmentVM;
@property (nonatomic) long long editType;
@property (retain, nonatomic) MJMetaBackupInfo *info;
@property (readonly, nonatomic) long long entrancePageIndex;
@property (copy, nonatomic) id /* block */ dateDidChageHandler;

- (id)initWithSegmentVM:(id)a0 editType:(long long)a1;
- (double)centerPageTitleWidth;
- (long long)numberOfPages;
- (id)titleItemAtIndex:(long long)a0;
- (id)contentItemAtIndex:(long long)a0;
- (void)fetchDatas;
- (void)reloadEditingPage;
- (id)createDatePanel;
- (void).cxx_destruct;

@end
