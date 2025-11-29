@class IESLiveGameInteractStickerConfigModel, NSMutableDictionary, NSDictionary, BattleInfoDisplayStickerInfo, NSString, IESLiveGameInteractStickerTemplate01Model;

@interface IESLiveGameInteractStickerModel : NSObject <NSCopying>

@property (retain, nonatomic) BattleInfoDisplayStickerInfo *battleModel;
@property (retain, nonatomic) IESLiveGameInteractStickerTemplate01Model *template01Model;
@property (copy, nonatomic) NSDictionary *stickerDict;
@property (retain, nonatomic) NSMutableDictionary *didClosedDict;
@property (nonatomic) unsigned long long stickerType;
@property (nonatomic) struct CGSize { double width; double height; } stickerSize;
@property (copy, nonatomic) NSString *stickerData;
@property (copy, nonatomic) NSString *stickerDataDigest;
@property (copy, nonatomic) NSString *stickerURL;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSDictionary *urlParams;
@property (nonatomic) BOOL isFromIM;
@property (nonatomic) long long oprType;
@property (copy, nonatomic) NSString *recordID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;
@property (nonatomic) double scale;
@property (nonatomic) BOOL shouldHide;
@property (retain, nonatomic) IESLiveGameInteractStickerConfigModel *configModel;
@property (nonatomic) BOOL needRollBack;
@property (nonatomic) BOOL isPreload;

+ (id)modelWithGameRoomStickerOprMessage:(id)a0;
+ (id)modelWithGameRoomStickerResponse:(id)a0;

- (id)renderTypeString;
- (BOOL)didClosedForOrientation:(id)a0;
- (BOOL)canRollBack;
- (double)stickerRatio;
- (BOOL)needWaitingSEI;
- (void)updateDidClosedDict:(id)a0;
- (unsigned long long)stickerOrder;
- (void)setDidClosed:(BOOL)a0 forOrientation:(id)a1;
- (BOOL)shouldRedisplay:(id)a0;
- (unsigned long long)renderType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)configKey;
- (id)defaultURL;

@end
