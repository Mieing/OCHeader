@class IESECLiveGoodsListAnchorInfo, NSArray, NSMutableDictionary, IESECLivePageControl, NSMutableArray;

@interface IESECLiveGoodsListUpdateExtraInfo : NSObject

@property (retain, nonatomic) IESECLiveGoodsListAnchorInfo *anchorInfo;
@property (retain, nonatomic) NSMutableArray *fetchedGoodsViewModels;
@property (retain, nonatomic) NSArray *invalidPageGoodsViewModels;
@property (retain, nonatomic) IESECLivePageControl *oldPageControl;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) BOOL isFetchPreviousPage;
@property (nonatomic) BOOL disableGoodsModelsDelegateUpdate;

- (void).cxx_destruct;
- (id)init;

@end
