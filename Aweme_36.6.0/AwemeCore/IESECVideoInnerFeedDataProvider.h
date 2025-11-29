@class IESECVideoInnerFlowRequestParams, IESECVideoInnerFeedTopCellViewModel, IESECVideoInnerFeedGuessLikeViewModel, NSMutableDictionary, NSString, IESECGoodsFeedContext, NSMutableArray;
@protocol IESECVideoInnerFlowListActionDelegate;

@interface IESECVideoInnerFeedDataProvider : NSObject <IESECContentListDataProviderProtocol>

@property (retain, nonatomic) NSMutableArray *datas;
@property (retain, nonatomic) IESECGoodsFeedContext *context;
@property (retain, nonatomic) IESECVideoInnerFlowRequestParams *requestParams;
@property (retain, nonatomic) IESECVideoInnerFeedTopCellViewModel *topCellViewModel;
@property (retain, nonatomic) IESECVideoInnerFeedGuessLikeViewModel *guessLikeViewModel;
@property (retain, nonatomic) NSMutableArray *filterIds;
@property (retain, nonatomic) NSMutableDictionary *cellDisplayDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (weak, nonatomic) id<IESECVideoInnerFlowListActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)firstRequestWithFinishBlock:(id /* block */)a0;
- (id)cellViewModelForIndexPath:(id)a0;
- (void)displayCellForIndexPath:(id)a0;
- (void)requestMoreWithFinishBlock:(id /* block */)a0;
- (void)processServerData:(id)a0 error:(id)a1;
- (double)topCellHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topCellImageRect;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;

@end
