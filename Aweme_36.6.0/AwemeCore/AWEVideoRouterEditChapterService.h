@class NSString;

@interface AWEVideoRouterEditChapterService : NSObject <AWEStudioEditChapterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startEditChapterWithConfig:(id)a0 isRecommend:(BOOL)a1 extra:(id)a2;
- (void)reeditChapterWithParams:(id)a0 completion:(id /* block */)a1;
- (id)p_startEditChapterWithConfig:(id)a0 isRecommend:(BOOL)a1 extra:(id)a2;

@end
