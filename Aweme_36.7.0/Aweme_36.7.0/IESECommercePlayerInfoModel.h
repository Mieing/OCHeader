@class NSString, IESECHeadVideoModel, IESECGoodsDetailTracker;

@interface IESECommercePlayerInfoModel : NSObject

@property (retain, nonatomic) IESECHeadVideoModel *videoModel;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isHiddenCover;
@property (nonatomic) BOOL onlyUserInteraction;
@property (copy, nonatomic) NSString *outCoverName;
@property (copy, nonatomic) NSString *outBackgroundColor;
@property (nonatomic) BOOL shouldHideInteractionUI;
@property (retain, nonatomic) IESECGoodsDetailTracker *detailTracker;
@property (nonatomic) BOOL enableResumePlay;
@property (nonatomic) unsigned long long autoPlayMode;

- (void).cxx_destruct;
- (id)init;

@end
