@class NSString, NSDictionary, NSArray, NSNumber, HTSLiveGiftMessage_TextEffect;

@interface IESLiveTopAssetAnimationNode : NSObject

@property (retain, nonatomic) NSNumber *assetID;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *videoFileDir;
@property (retain, nonatomic) NSDictionary *effectMixGiftMaskInfo;
@property (nonatomic) long long priority;
@property (nonatomic) long long cycleEndTime;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *trackParam;
@property (nonatomic) long long playTimes;
@property (nonatomic) long long fadeInAnimationDuration;
@property (nonatomic) long long fadeOutAnimationDuration;
@property (copy, nonatomic) NSArray *uniqueKeys;
@property (retain, nonatomic) HTSLiveGiftMessage_TextEffect *textEffect;
@property (nonatomic) BOOL textEffectImageNeedCircle;

- (BOOL)isRoleGift;
- (BOOL)triggeredByCurrentUser:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
