@class FinderUserpageAdInfo, NSString, FinderUserpageAdInfo_FinderUserpageAdItem, NSHashTable;

@interface WCFinderProfileADPlugin : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) FinderUserpageAdInfo *adInfo;
@property (readonly, nonatomic) FinderUserpageAdInfo_FinderUserpageAdItem *adItem;
@property (readonly, nonatomic) NSString *tidOfAd;
@property (nonatomic) BOOL isUsed;

- (id)init;
- (void)fillAdInfo:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;

@end
