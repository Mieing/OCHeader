@class NSString;
@protocol IESLiveInternalRouter;

@interface AWELiveReportConfigImpl : NSObject <IESLiveReportService>

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performReportActionForHostCompletion:(id /* block */)a0;
- (id)getReportCachedRoomIDs:(id)a0;
- (void)reportUser:(id)a0 room:(id)a1 source:(unsigned long long)a2 reportContent:(id)a3 contentId:(id)a4;
- (void)reportUser:(id)a0 room:(id)a1 source:(unsigned long long)a2 reportContent:(id)a3 contentId:(id)a4 completion:(id /* block */)a5;
- (void)reportUser:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)reportUser:(BOOL)a0 params:(id)a1;
- (void)cacheReportRoomID:(id)a0 cacheKey:(id)a1;
- (void)executeReport;
- (long long)reportAnchorABType;
- (long long)reportCommentABType;
- (void).cxx_destruct;

@end
