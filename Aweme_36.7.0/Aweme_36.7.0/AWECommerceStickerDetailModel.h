@class NSString, AWETaskLiteModel, AWECommerceStickerDisclaimerModel, AWEURLModel;

@interface AWECommerceStickerDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *adOwnerID;
@property (copy, nonatomic) NSString *adOwnerSecUserID;
@property (copy, nonatomic) NSString *adOwnerName;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descLetters;
@property (copy, nonatomic) NSString *descOpenURL;
@property (copy, nonatomic) NSString *descWebURL;
@property (copy, nonatomic) NSString *screenDesc;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *descUrlTitle;
@property (retain, nonatomic) AWEURLModel *screenIconURL;
@property (nonatomic) long long expireTime;
@property (retain, nonatomic) AWECommerceStickerDisclaimerModel *disclaimer;
@property (retain, nonatomic) AWETaskLiteModel *taskLite;
@property (copy, nonatomic) NSString *flashID;

+ (id)publishIconUrlJSONTransformer;
+ (id)screenIconURLJSONTransformer;
+ (id)unlockInfoJSONTransformer;
+ (id)disclaimerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
