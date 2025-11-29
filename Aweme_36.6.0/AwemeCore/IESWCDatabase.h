@class NSString, WCTDatabase, SSWCTDatabase;

@interface IESWCDatabase : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) WCTDatabase *oldDB;
@property (retain, nonatomic) SSWCTDatabase *updateDB;
@property (nonatomic) long long versionType;
@property (nonatomic) int tag;

- (void)setCipherKey:(id)a0;
- (BOOL)canOpen;
- (void)blockade;
- (BOOL)createTableAndIndexesOfName:(id)a0 withClass:(Class)a1 andError:(void *)a2;
- (BOOL)isTableExists:(id)a0;
- (BOOL)dropIndexOfName:(id)a0;
- (BOOL)removeFiles;
- (id)initWithPath:(id)a0 dbVersion:(long long)a1;
- (void)close;
- (BOOL)commitTransaction;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)beginTransaction;
- (void)close:(id /* block */)a0;
- (BOOL)rollbackTransaction;

@end
