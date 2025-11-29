@class NSSet, NSMutableSet;

@interface EmoticonDescAliasObject : NSObject

@property (retain, nonatomic) NSSet *descList;
@property (retain, nonatomic) NSMutableSet *resultCache;
@property (nonatomic) int resultCacheVersion;

- (void).cxx_destruct;

@end
