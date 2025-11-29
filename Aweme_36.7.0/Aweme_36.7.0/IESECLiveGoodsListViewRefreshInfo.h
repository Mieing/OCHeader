@class NSDictionary, NSMutableDictionary;

@interface IESECLiveGoodsListViewRefreshInfo : NSObject

@property (nonatomic) long long refreshScene;
@property (nonatomic) long long updateType;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long option;
@property (nonatomic) BOOL reloadFromCurrentPosition;
@property (nonatomic) BOOL resetTabIndex;
@property (nonatomic) BOOL modifyRelatedInfo;
@property (nonatomic) long long fetchSceneType;
@property (nonatomic) BOOL canShowCache;
@property (retain, nonatomic) NSMutableDictionary *fetchParams;
@property (nonatomic) BOOL useDiff;

- (void)updateRequestScene;
- (void).cxx_destruct;
- (id)init;

@end
