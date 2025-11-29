@class NSString, NSArray;

@interface AWEIMUserDBCleanerTask : NSObject

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *subPath;
@property (readonly, copy, nonatomic) NSArray *extensions;
@property (readonly, nonatomic) BOOL isUidPath;
@property (readonly, nonatomic) BOOL onlyOneFile;

- (void)p_cleanOnlyOneFile;
- (void)p_cleanUidsDir;
- (BOOL)isMatchPathExtension:(id)a0 extensions:(id)a1;
- (id)initWithFileRoot:(id)a0 fileName:(id)a1 extension:(id)a2;
- (id)initWithUidsPath:(id)a0 uidSubPath:(id)a1 extension:(id)a2;
- (void)cleanHistoryFile;
- (void).cxx_destruct;
- (BOOL)directoryExistsAtPath:(id)a0;

@end
