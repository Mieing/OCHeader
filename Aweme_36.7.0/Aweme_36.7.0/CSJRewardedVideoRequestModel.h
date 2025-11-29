@class NSString, NSDictionary, CSJRewardedVideoModel;

@interface CSJRewardedVideoRequestModel : CSJRequestModel <CSJToDictionary>

@property (copy, nonatomic) NSString *rewardName;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long network;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *userAgent;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *mediaExtra;
@property (retain, nonatomic) CSJRewardedVideoModel *rewardedVideoModel;
@property (nonatomic) double videoDuration;
@property (nonatomic) long long duration;
@property (nonatomic) long long playStartTs;
@property (nonatomic) long long playEndTs;
@property (nonatomic) long long rewardType;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *transId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRewardedVideoModel:(id)a0 extInfo:(id)a1 extraDic:(id)a2;
- (void).cxx_destruct;
- (id)dictionaryValue;

@end
