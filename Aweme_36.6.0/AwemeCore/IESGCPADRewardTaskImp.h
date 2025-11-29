@class BDARVSourceModel, NSString;
@protocol IESGCPADRewardDelegate;

@interface IESGCPADRewardTaskImp : NSObject <AWERewardVideoProtocol, IESGCPADRewardTask>

@property (nonatomic) BOOL hasOpened;
@property (nonatomic) BOOL watchedExcitingVideo;
@property (weak, nonatomic) id<IESGCPADRewardDelegate> delegate;
@property (copy, nonatomic) id /* block */ openRewardVideoContainer;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoAd:(id)a0 didLoadFailWithError:(id)a1;
- (void)videoAd:(id)a0 loadSuccessWithInfos:(id)a1;
- (void)videoAd:(id)a0 didClickBannerBtnWithInfo:(id)a1;
- (void)videoAd:(id)a0 didClickCloseWithInfo:(id)a1;
- (void)videoAdAfterDismissed;
- (void)videoAd:(id)a0 becomeEffectiveWithInfos:(id)a1 index:(long long)a2;
- (void)videoAd:(id)a0 moreRewardDisplayInfoIndex:(long long)a1 callBack:(id /* block */)a2;
- (void)openADRewardContainer;
- (void)createARVSourceModel:(long long)a0 adFrom:(id)a1 rit:(long long)a2 creatorType:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
