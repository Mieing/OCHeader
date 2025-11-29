@class NSArray, NSString;
@protocol AWEShareTask, AWESharePanelListItem;

@interface AWESharePanelListIMCellModel : NSObject <AWESharePanelListCellModel>

@property (retain, nonatomic) id<AWEShareTask> task;
@property (copy, nonatomic) NSArray *transpondShareModelList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) id<AWESharePanelListItem> listItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListItem:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)cellType;
- (id)cellIdentifier;
- (double)cellHeight;

@end
