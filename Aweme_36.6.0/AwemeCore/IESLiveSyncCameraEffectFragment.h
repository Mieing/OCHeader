@class IESLiveRoomBeautyItem, NSMutableDictionary, NSString, HTSLiveApi, NSMutableSet, IESLiveBeautyResourceFetcher;

@interface IESLiveSyncCameraEffectFragment : IESLiveRoomComponent <IESLiveSyncRouter, IESLiveAnchorECommerceActions>

@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) IESLiveRoomBeautyItem *selectedFilter;
@property (nonatomic) BOOL isECommerceNoFilter;
@property (nonatomic) BOOL isECommerceNoFilterDefaultOpen;
@property (nonatomic) BOOL isCommodityShowing;
@property (nonatomic) BOOL isNormalNoFilter;
@property (nonatomic) long long unusedEffectType;
@property (retain, nonatomic) NSMutableDictionary *replaceItems;
@property (retain, nonatomic) NSMutableSet *replacedBeautyPaths;
@property (nonatomic) BOOL hasFirstSyncNoBeauty;
@property (nonatomic) BOOL currentBeautyState;
@property (retain, nonatomic) IESLiveBeautyResourceFetcher *resourceFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)didUpdateEcommerceGoods:(BOOL)a0;
- (void)syncToRemote;
- (void)updateECommerceNoFilter:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)getECommerceNoFilter;
- (BOOL)getECommerceNoFilterDefaultOpen;
- (BOOL)shouldApplyECommercePartialFilter;
- (id)replacedPathForBeautyItem:(id)a0;
- (void)updateNoFilterStatus;
- (BOOL)isUnusedEffect;
- (void)setNeedsUpload;
- (id)paramsForUpload;
- (void)updateReplaceItems;
- (void)trackECommerceNoFilterIconShow;
- (void).cxx_destruct;

@end
