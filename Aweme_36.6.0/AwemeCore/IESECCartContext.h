@class NSMutableArray, NSString, NSNumber, IESECCartRequest, IESECQualityInfoV2;
@protocol YataInstanceInterface, YataRenderObjectInterface;

@interface IESECCartContext : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) IESECCartRequest *request;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (weak, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) NSMutableArray *recommendFetchedNodes;
@property (copy, nonatomic) NSString *anchorCartID;
@property (retain, nonatomic) NSMutableArray *selectedCartIDs;
@property (retain, nonatomic) NSMutableArray *selectedShopIDs;
@property (copy, nonatomic) NSString *selectedTabType;
@property (weak, nonatomic) id<YataRenderObjectInterface> operatingSKURenderNode;
@property (nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) NSNumber *renderWithCache;
@property (nonatomic) unsigned long long firstPageStatus;

+ (BOOL)enableSliceXFitPhoneWidth;
+ (double)loadMoreRefreshOffset;
+ (double)contentScale;

- (BOOL)canLoadMore;
- (id)pageBTM;
- (id)baseTrackerParams;
- (BOOL)isHomePage;
- (id)currentSelectedCartIDs;
- (id)currentSelectedShopIDs;
- (id)prepareQueryExParams;
- (id)prepareQueryQueryParams;
- (id)prepareQueryYataParams;
- (BOOL)anchorOpt;
- (BOOL)deleteOpt;
- (BOOL)clientSelectedOpt;
- (BOOL)enablePullUpRefresh;
- (void).cxx_destruct;
- (id)init;

@end
