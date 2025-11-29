@class NSSet, NSString;

@interface AWEFeedCacheTagProcessorFactory : NSObject <AWEFeedCacheProcessorFactory>

@property (retain, nonatomic) NSSet *keySet;
@property (copy, nonatomic) id /* block */ creator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetTags:(id)a0 creator:(id /* block */)a1;
- (id)createWithTag:(id)a0;
- (void).cxx_destruct;

@end
