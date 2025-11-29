@class IESECWinCommentCell, IESECServiceProxy, FBKVOController, IESECWinCommentObject;
@protocol IESECWinMainScrollService, IESECWinAuthorService, IESECWinBackService, IESECWinSplitService;

@interface IESECWinCommentSectionController : IESECWinListKitCellController

@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECWinCommentObject *object;
@property (weak, nonatomic) IESECWinCommentCell *commentCell;
@property (retain, nonatomic) IESECServiceProxy<IESECWinBackService> *backService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)configWithCell:(id)a0;
- (id)getNewStyleReputationTrackParams;
- (void)trackAuthorInfoClick:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)addObserver;
- (void)scrollViewDidScroll;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
