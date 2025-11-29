@class IESLiveGiftAssetDiskRecord;

@interface IESLiveGiftAssetCleanConfig : NSObject

@property (retain, nonatomic) IESLiveGiftAssetDiskRecord *diskRecord;
@property (nonatomic) double expireDuration;
@property (nonatomic) long long maxRoomMemberCount;
@property (nonatomic) long long appOnDevicePercentage;
@property (nonatomic) long long minAssetSize;
@property (readonly, nonatomic) double assetCleanGapInterval;
@property (nonatomic) long long hintCount;
@property (nonatomic) double launchCleanDurationAfterInRoom;
@property (nonatomic) long long maxLoadingDuration;

- (void)checkNeedCleanWithAssetSize:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
