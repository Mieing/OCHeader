@class FinderWindowProductInfo, NSMutableDictionary, MMFinderLiveShopSelfOpenParams, FinderJumpInfo;

@interface MMLiveEnterRoomActionModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long action;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) MMFinderLiveShopSelfOpenParams *openShopSelfParams;
@property (readonly, nonatomic) NSMutableDictionary *extraInfo;

- (id)init;
- (void).cxx_destruct;

@end
