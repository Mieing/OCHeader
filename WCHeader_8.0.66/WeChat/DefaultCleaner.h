@class NSArray, NSString;

@interface DefaultCleaner : NSObject <MMCacheCleaner>

@property (retain, nonatomic) NSArray *paths;
@property (nonatomic) int policy;
@property (copy, nonatomic) id /* block */ cleanBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makePolicy:(int)a0 andPath:(id)a1;

- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (void).cxx_destruct;

@end
