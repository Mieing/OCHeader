@class NSDictionary, NSString;

@interface MMOtherCacheCleaner : NSObject <MMCacheCleaner> {
    BOOL _cancelled;
}

@property (retain, nonatomic) NSDictionary *categorySizes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getCachePaths;
- (id)getTaggedCachePaths;
- (int)getDefaultCleanPolicy;
- (unsigned long long)doCleanPart:(id)a0 categories:(int *)a1 categoryCount:(int)a2 categorySizes:(unsigned long long *)a3 targetSize:(unsigned long long)a4 hardLimit:(long long)a5;
- (unsigned long long)saveCleanSize:(unsigned long long)a0 categorySizes:(unsigned long long *)a1;
- (unsigned long long)doCleanForSize:(unsigned long long)a0;
- (void)cancelClean;
- (void).cxx_destruct;

@end
