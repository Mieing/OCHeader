@class NSArray;

@interface AWESearchUGCTopicTabInfo : NSObject

@property (copy, nonatomic) NSArray *tabInfos;

- (id)extraWithTabID:(id)a0;
- (id)requestParamsWithTabID:(id)a0;
- (id)clientEngineExtraWithTabID:(id)a0;
- (id)searchSourceWithTabID:(id)a0;
- (id)requestPathWithTabID:(id)a0;
- (id)iconURLArrayWithTabID:(id)a0 theme:(unsigned long long)a1 isSelected:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithTabs:(id)a0;

@end
