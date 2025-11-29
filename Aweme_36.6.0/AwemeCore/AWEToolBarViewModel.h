@class NSArray, NSDictionary, ACCToolBarCommonViewLayout, ACCToolBarItemsModel;

@interface AWEToolBarViewModel : NSObject

@property (retain, nonatomic) ACCToolBarCommonViewLayout *layout;
@property (retain, nonatomic) ACCToolBarItemsModel *model;
@property (retain, nonatomic) NSArray *barItemInfoArray;
@property (retain, nonatomic) NSDictionary *allBarItemInfoMap;
@property (retain, nonatomic) NSArray *displayBarItemInfoArray;
@property (retain, nonatomic) NSArray *displayBarItemModelArray;
@property (retain, nonatomic) NSArray *displayBarItemViewArray;

- (BOOL)itemBarShouldShow:(id)a0;
- (id)valueWithItemID:(void *)a0;
- (id)itemInfoWithItemID:(void *)a0;
- (void)updateItemInfoArray:(id)a0;
- (void)updateDisplayBarItemArray;
- (id)displayBarItemModelList;
- (void)updateDisplayBarItemWithItemID:(void *)a0;
- (id)itemViewWithItemID:(void *)a0;
- (void)generateBarItemInfoMapWithBarItemInfoArray:(id)a0;
- (id)itemModelWithItemID:(void *)a0;
- (id)displayBarItemInfoList;
- (id)displayBarItemViewList;
- (void).cxx_destruct;

@end
