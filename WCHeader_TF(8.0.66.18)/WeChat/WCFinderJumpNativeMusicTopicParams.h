@class NSString, NSArray;

@interface WCFinderJumpNativeMusicTopicParams : NSObject

@property (copy, nonatomic) NSString *musicIdStr;
@property (copy, nonatomic) NSString *byPassInfoString;
@property (retain, nonatomic) NSArray *singers;
@property (nonatomic) unsigned int opSwitch;
@property (nonatomic) unsigned int hideFlag;
@property (nonatomic) int musicPageType;
@property (copy, nonatomic) NSString *topicWording;
@property (copy, nonatomic) NSString *songId;
@property (copy, nonatomic) NSString *audioId;
@property (copy, nonatomic) NSString *miaojianSdkPrefix;
@property (copy, nonatomic) NSString *listenIdStr;
@property (nonatomic) int likeFlag;
@property (retain, nonatomic) NSString *listenSimplePlayInfoBase64;
@property (nonatomic) long long likeAction;
@property (retain, nonatomic) NSString *listenCtxRecommendInfoBufferBase64;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (unsigned long long)musicId;
- (id)byPassInfo;
- (id)playerInfo;
- (void).cxx_destruct;

@end
