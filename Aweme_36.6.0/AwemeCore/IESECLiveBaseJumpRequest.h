@class IESECLiveGoodsJumpTrackInfo, NSString, NSMutableDictionary, IESECBTMModel;

@interface IESECLiveBaseJumpRequest : NSObject

@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) long long fromScene;
@property (nonatomic) BOOL needShowMask;
@property (retain, nonatomic) NSString *sourceBtmToken;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (retain, nonatomic) IESECLiveGoodsJumpTrackInfo *jumpTrackInfo;

- (void).cxx_destruct;

@end
