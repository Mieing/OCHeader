@class NSString, UIImage, HTSLiveSendTogether, HTSLiveAnchorGuide, NSNumber;

@interface IESLiveGiftSticker : NSObject <IESLiveGiftStickerOutputProtocol>

@property (copy, nonatomic) NSString *md5;
@property (nonatomic) int messageClientGiftSource;
@property (copy, nonatomic) NSString *traceId;
@property (nonatomic) long long giftId;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long fetchAssetsDuration;
@property (nonatomic) BOOL isAssetMessage;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) int resourceType;
@property (nonatomic) int giftType;
@property (nonatomic) BOOL iesEffect;
@property (nonatomic) BOOL special;
@property (copy, nonatomic) NSString *senderUID;
@property (copy, nonatomic) NSString *receiverUID;
@property (retain, nonatomic) UIImage *goldEffectImage;
@property (retain, nonatomic) NSString *goldEffectKey;
@property (retain, nonatomic) HTSLiveAnchorGuide *anchorGuide;
@property (copy, nonatomic) NSString *resourceUri;
@property (nonatomic) struct IESLiveAudioGraphGiftStruct { BOOL isAudioGift; BOOL useInMic; BOOL useInMusic; } audioGraphGiftStruct;
@property (nonatomic) double delayEnqueueInterval;
@property (nonatomic) BOOL faceResourceRepelHighSticker;
@property (retain, nonatomic) NSNumber *appliedTime;
@property (copy, nonatomic) NSString *effectInfo;
@property (nonatomic) long long effectInfoFrequencyControl;
@property (nonatomic) long long playChannel;
@property (nonatomic) double minPlayTime;
@property (nonatomic) BOOL needInterrupted;
@property (nonatomic) double startTime;
@property (retain, nonatomic) HTSLiveSendTogether *sendTogether;
@property (retain, nonatomic) NSNumber *stickerID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSNumber *effectID;
@property (copy, nonatomic) NSString *schemaUrl;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *receivedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
