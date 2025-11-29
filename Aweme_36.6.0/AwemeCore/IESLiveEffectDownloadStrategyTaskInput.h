@class NSArray, NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveEffectDownloadStrategyTaskInput : NSObject

@property (copy, nonatomic) NSArray *effectMetaArray;
@property (nonatomic) long long fetchMomentType;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) NSArray *zipSweepIds;
@property (copy, nonatomic) NSArray *downloadBlackList;
@property (copy, nonatomic) NSDictionary *effectDownloadDateDic;
@property (nonatomic) long long effectDownloadTimeInterval;

- (id)initWithEffectMetaArray:(id)a0 fetchMomentType:(long long)a1 roomModel:(id)a2 zipSweepIds:(id)a3 downloadBlackList:(id)a4 effectDownloadDateDic:(id)a5 effectDownloadTimeInterval:(long long)a6;
- (void).cxx_destruct;

@end
