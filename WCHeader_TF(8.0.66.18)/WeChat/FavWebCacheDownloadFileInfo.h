@class NSString, NSMutableSet, NSMutableDictionary;

@interface FavWebCacheDownloadFileInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *mediaFiles;
@property (retain, nonatomic) NSMutableSet *textFiles;
@property (retain, nonatomic) NSMutableDictionary *mimeTypeDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_mediaFiles;
+ (void)PBArrayAdd_textFiles;
+ (void)PBArrayAdd_mimeTypeDic;
+ (void)initialize;

- (id)init;
- (long long)count;
- (void)removeObject:(id)a0;
- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
