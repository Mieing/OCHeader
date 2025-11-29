@class NSDictionary;

@interface CSJLiveAdCustomConfig : NSObject

@property (copy, nonatomic) NSDictionary *enterFromMergeMap;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ tracker;
@property (copy, nonatomic) id /* block */ invoker;

- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
