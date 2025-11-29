@class NSString, NSArray, NSMutableArray;

@interface WAMainFrameTaskBarSectionWeAppViewModel : NSObject {
    NSMutableArray *_appItems;
    NSMutableArray *_arrMyWeAppItemWhenShowCommonUse;
}

@property (nonatomic) BOOL isMyWeApp;
@property (nonatomic) BOOL isCommonUseWeApp;
@property (nonatomic) BOOL showMore;
@property (retain, nonatomic) NSString *session;
@property (nonatomic) unsigned long long isRefresh;
@property (nonatomic) long long maxShowCount;
@property (retain, nonatomic) NSArray *insertedIndexPaths;
@property (retain, nonatomic) NSArray *deletedIndexPaths;
@property (retain, nonatomic) NSArray *modifiedIndexPaths;

- (id)init:(BOOL)a0;
- (void)fillWeAppItems:(id)a0 arrMyWeAppItemWhenShowCommonUse:(id)a1;
- (void)fillWeAppItems:(id)a0 arrMyWeAppItemWhenShowCommonUse:(id)a1 refreshImmediately:(BOOL)a2;
- (id)appItemDatas;
- (id)dataForIndex:(long long)a0;
- (void)updateShowMoreState;
- (long long)count;
- (long long)target;
- (long long)currentWeAppCount;
- (long long)allCount;
- (id)itemsDescription;
- (id)deleteDataForIndex:(long long)a0;
- (void)moveItemFrom:(long long)a0 toIndex:(long long)a1;
- (void)onItemMove:(id)a0 from:(long long)a1 to:(long long)a2 isMy:(long long)a3;
- (long long)weMyAppCount;
- (long long)commuseWeappCount;
- (void).cxx_destruct;

@end
