@class IESLiveGuideModel, NSOperationQueue, BlockDetail, CreateInfoResponse_CreateInfo;
@protocol IESLiveGuideInterceptViewModelDelegate;

@interface IESLiveGuideInterceptViewModel : NSObject

@property (retain, nonatomic) IESLiveGuideModel *room;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *model;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL interceptNewStyleEnable;
@property (retain, nonatomic) BlockDetail *currentBlockDetail;
@property (weak, nonatomic) id<IESLiveGuideInterceptViewModelDelegate> delegate;

- (void)openLiveModelDidUpdate:(id)a0;
- (void)fetchGuideInterceptInfo;
- (id)initWithRoom:(id)a0 diContext:(id)a1;
- (void)updateGuideInterceptInfo;
- (void)handleClickView:(id)a0;
- (void)trackInterceptView:(id)a0 isClick:(BOOL)a1;
- (void)handleGuideInterceptInfo:(id)a0;
- (void).cxx_destruct;

@end
