@class NSString;
@protocol BDSimFeedPreCacheModel, BDSimFamiliarFeedListCacheModel, BDSimOriginalAdModel, BDSimVideoModel, BDSimFriendsFeedHistoryCacheModel, BDSimUserModel, BDSimBitrateSelectorResult;

@interface BDSimModelBuilder : NSObject {
    Class _modelCls;
}

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) BOOL isAds;
@property (nonatomic) BOOL isHardAd;
@property (nonatomic) BOOL isCanPlay;
@property (nonatomic) BOOL isVRVideo;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) id<BDSimOriginalAdModel> originAdInfo;
@property (nonatomic) double audioLoudness;
@property (retain, nonatomic) id<BDSimVideoModel, BDSimBitrateSelectorResult> video;
@property (retain, nonatomic) id<BDSimFeedPreCacheModel> feedPreCacheModel;
@property (retain, nonatomic) id<BDSimFriendsFeedHistoryCacheModel> friendsFeedHistoryCacheModel;
@property (retain, nonatomic) id<BDSimFamiliarFeedListCacheModel> familiarFeedListCacheModel;
@property (copy, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) id<BDSimUserModel> author;
@property (retain, nonatomic) id playletInfoModel;
@property (weak, nonatomic) id userInfo;

+ (id)createWithTargetModel:(Class)a0;

- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithModelClass:(Class)a0;

@end
