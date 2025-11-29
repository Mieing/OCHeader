@class NSString;

@interface IESGCPGameImagePreloadUtil : NSObject <IESGCPGameImagePreloadInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadGameIconWithGameMetaModel:(id)a0 gameId:(id)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)preloadGameDetailImageWithGameMetaModel:(id)a0 gameId:(id)a1 isVideoScene:(BOOL)a2;
- (id)preferredGameIconWithGameMetaModel:(id)a0;
- (void)preloadImageWithImageUrl:(id)a0 gameId:(id)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)reportPreloadResultWithUrl:(id)a0 gameId:(id)a1 source:(unsigned long long)a2 success:(BOOL)a3 containCache:(BOOL)a4;
- (void)didReportWithUrl:(id)a0 gameId:(id)a1 source:(unsigned long long)a2 success:(BOOL)a3 containCache:(BOOL)a4;

@end
