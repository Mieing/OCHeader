@class NSString;

@interface MMLiveEffectsBaseDataItem : NSObject

@property (retain, nonatomic) NSString *effectID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *thumbMd5;
@property (retain, nonatomic) NSString *resourceUrl;
@property (retain, nonatomic) NSString *resourceMd5;
@property (nonatomic) BOOL isResourcePrepared;

+ (id)dataItemWithResource:(id)a0;

- (id)materialResourceBaseFolder;
- (id)materialResourceFolderPath;
- (id)materialResourceUnzipTempFolderPath;
- (id)downloadCachingPath:(id)a0;
- (id)downloadWorkingPath:(id)a0;
- (BOOL)isDisableItem;
- (id)tempFolder;
- (id)rootFolder;
- (void).cxx_destruct;

@end
