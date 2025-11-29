@class NSString, CBaseFile;

@interface WePkgParser : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) CBaseFile *file;
@property (nonatomic) unsigned int resourceOffset;

- (id)initWithPkgPath:(id)a0;
- (id)getMetaInfo;
- (id)getResourceContent:(unsigned int)a0 Len:(unsigned int)a1;
- (BOOL)openFile;
- (id)getLiteAppPkgInfo;
- (void)updatePackageLiteInfo;
- (void).cxx_destruct;

@end
