@class NSArray, NSDate, NSMutableArray, IESLiveGiftAssetDiskRecord;

@interface IESLiveEffectAvailableDiskSpaceConfig : NSObject

@property (nonatomic) long long availableDiskSpace;
@property (retain, nonatomic) NSDate *lastFetchAvailableDiskSpaceDate;
@property (nonatomic) long long fetchAvailableDiskSpaceTimeInterval;
@property (nonatomic) BOOL enablefetchAvailableDiskSpace;
@property (retain, nonatomic) NSArray *spaceRank;
@property (retain, nonatomic) IESLiveGiftAssetDiskRecord *diskRecord;
@property (nonatomic) BOOL didInitializeDiskConfig;
@property (retain, nonatomic) NSMutableArray *diskRecordCompletions;

- (id)getAssetAPIExtraWithRoomModel:(id)a0 momentType:(long long)a1;
- (void)getDiskRecordWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
