@interface BrandProfileTabUtil : NSObject

+ (void)fetchFinderAudioUserPageData:(id)a0 lastBuffer:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
+ (void)fetchFinderCollectionList:(id)a0 lastBuffer:(id)a1 successful:(id /* block */)a2 failure:(id /* block */)a3;
+ (id)audioCollectionWithCategory:(id)a0 bizUsername:(id)a1 categoryItem:(id)a2 reportInfo:(id)a3 clickAction:(id /* block */)a4;
+ (BOOL)useHeaderServiceMenu;

@end
