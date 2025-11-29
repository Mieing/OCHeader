@class WCMicroMerchantFeedsGroup, WCFinderShareToMomentsItem, NSString, TingShareListenItem, WCFinderLiveShareItem, WCMegaVideoShareItem, TingShareCategoryItem, TingShareChatRoomItem, TingShareLyricsItem, WCActionAreaVM;

@interface WCTimeLineCellShowItem : NSObject <NSObject> {
    NSString *m_dataItemID;
}

@property (nonatomic) double cacheTime;
@property (readonly, nonatomic) WCActionAreaVM *actionAreaVM;
@property (nonatomic) BOOL m_showWithInfo;
@property (nonatomic) BOOL m_showLocationInfo;
@property (nonatomic) BOOL m_showActionInfo;
@property (nonatomic) BOOL m_isUploadFailed;
@property (nonatomic) unsigned int m_rewardCount;
@property (nonatomic) BOOL m_isSightThumbImageDownloaded;
@property (retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem;
@property (retain, nonatomic) WCMegaVideoShareItem *finderLongVideoShareItem;
@property (retain, nonatomic) WCFinderShareToMomentsItem *finderShareToMomentsItem;
@property (nonatomic) BOOL isNewLife;
@property (nonatomic) BOOL isWeishange;
@property (retain, nonatomic) WCMicroMerchantFeedsGroup *wsGroup;
@property (nonatomic) BOOL isNewMusicStyle;
@property (retain, nonatomic) NSString *adInfoUpdateFlag;
@property (retain, nonatomic) NSString *adDescription;
@property (nonatomic) long long adSocialLikeDisplayType;
@property (nonatomic) BOOL isSpringStyle;
@property (nonatomic) BOOL isDisplaySpringSource;
@property (retain, nonatomic) TingShareListenItem *tingListenItem;
@property (retain, nonatomic) TingShareCategoryItem *tingCategoryItem;
@property (retain, nonatomic) TingShareChatRoomItem *tingChatRoomItem;
@property (retain, nonatomic) TingShareLyricsItem *tingLyricsItem;
@property (nonatomic) BOOL isShowEcsView;
@property (nonatomic) BOOL isShowAppNameView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 actionAreaVM:(id)a1;
- (BOOL)canShowAppNameWithDataItem:(id)a0;
- (BOOL)isDifferentWithDataItem:(id)a0 actionAreaVM:(id)a1;
- (id)fetchAdInfoUpdateFlagWithDataItem:(id)a0;
- (id)fetchAdDescriptionWithDataItem:(id)a0;
- (BOOL)isDifferentAdInfoWithDataItem:(id)a0;
- (BOOL)isDifferentWsSateWithDataItem:(id)a0;
- (BOOL)isDifferentMusicWithDataItem:(id)a0;
- (BOOL)isDifferentTingAudioWithDataItem:(id)a0;
- (BOOL)isDifferentTingCategoryWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
