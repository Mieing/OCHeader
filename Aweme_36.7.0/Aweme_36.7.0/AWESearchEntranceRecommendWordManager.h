@class NSString;
@protocol AWEHttpTask;

@interface AWESearchEntranceRecommendWordManager : NSObject <AWESearchEntranceManagerProtocol>

@property (weak, nonatomic) id<AWEHttpTask> recommendTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchRecommendWordsWithAwemeID:(id)a0 needDegrade:(BOOL)a1 Completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
