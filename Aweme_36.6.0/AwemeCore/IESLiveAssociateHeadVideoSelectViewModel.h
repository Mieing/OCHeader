@class IESLiveAssociateHeadVideoSelectApi, IESLiveAssociateHeadVideoFoundationDetailViewModel, NSNumber, NSMutableArray;

@interface IESLiveAssociateHeadVideoSelectViewModel : NSObject

@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) IESLiveAssociateHeadVideoSelectApi *api;
@property (retain, nonatomic) NSMutableArray *videoModelList;
@property (retain, nonatomic) IESLiveAssociateHeadVideoFoundationDetailViewModel *detailViewModel;
@property (nonatomic) BOOL hasSelected;

- (void)loadVideoListWithCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)transferAwemeVideosToModels:(id)a0;
- (id)transferAwemeVideoToModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
