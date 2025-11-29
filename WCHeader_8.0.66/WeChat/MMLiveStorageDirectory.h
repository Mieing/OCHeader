@class NSString, NSMutableDictionary, NSArray;

@interface MMLiveStorageDirectory : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *fullPath;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long sizeOnDisk;
@property (retain, nonatomic) NSMutableDictionary *subdirectories;
@property (retain, nonatomic) NSMutableDictionary *containedFiles;
@property (nonatomic) BOOL scanned;
@property (readonly, nonatomic) NSArray *directories;
@property (readonly, nonatomic) NSArray *files;

- (void)addDirectory:(id)a0;
- (void)addFile:(id)a0;
- (void).cxx_destruct;

@end
