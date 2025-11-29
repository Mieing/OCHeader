@class NSString;

@interface AWEFeedCacheUpdateProcessor : NSObject <AWEFeedCacheProcessor>

@property (copy, nonatomic) id /* block */ UpdateCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onProcess:(id)a0 context:(id)a1;
- (id)initWithUpdateCondition:(id /* block */)a0;
- (void).cxx_destruct;

@end
