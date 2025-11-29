@class NSString;

@interface YYTextArchiver : NSKeyedArchiver <NSKeyedArchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedDataWithRootObject:(id)a0;
+ (BOOL)archiveRootObject:(id)a0 toFile:(id)a1;

- (id)init;
- (id)initForWritingWithMutableData:(id)a0;
- (id)archiver:(id)a0 willEncodeObject:(id)a1;

@end
