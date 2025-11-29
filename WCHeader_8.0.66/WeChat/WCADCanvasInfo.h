@class WCArrowDownIconStyle, NSArray, NSString, WCADCanvasPageBackgroundCoverInfo, WCADCanvasEggAnimationInfo, WCADCanvasGiveHBCardInfo;

@interface WCADCanvasInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *originalPageList;
@property (readonly, nonatomic) NSArray *adCanvasPageList;
@property (retain, nonatomic) NSString *fromAdXml;
@property (retain, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) NSString *shareDesc;
@property (retain, nonatomic) NSString *shareWebUrl;
@property (retain, nonatomic) NSString *shareThumbUrl;
@property (retain, nonatomic) WCArrowDownIconStyle *arrowDownIconStyle;
@property (nonatomic) long long sizeType;
@property (nonatomic) int basicWidth;
@property (nonatomic) int basicRootFontSize;
@property (nonatomic) long long widthRoundingType;
@property (nonatomic) long long heightRoundingType;
@property (nonatomic) BOOL shouldVideoLayerRasterize;
@property (nonatomic) int type;
@property (nonatomic) int subType;
@property (nonatomic) int enterType;
@property (nonatomic) int disableShareBitSet;
@property (nonatomic) int forceStay;
@property (nonatomic) int visibleCount;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *officialSyncBuffer;
@property (retain, nonatomic) NSString *rightBarTitle;
@property (retain, nonatomic) NSString *rightBarCanvasId;
@property (retain, nonatomic) NSString *rightBarCanvasExt;
@property (retain, nonatomic) NSString *canvasInfoId;
@property (retain, nonatomic) NSString *pageId;
@property (nonatomic) BOOL isInteractiveCanvas;
@property (retain, nonatomic) NSArray *globalComponentItems;
@property (retain, nonatomic) WCADCanvasEggAnimationInfo *eggAnimationInfo;
@property (retain, nonatomic) WCADCanvasGiveHBCardInfo *giveHBCardInfo;
@property (retain, nonatomic) WCADCanvasPageBackgroundCoverInfo *backgroundCoverInfo;
@property (nonatomic) int bizId;
@property (retain, nonatomic) NSString *shareAppId;
@property (retain, nonatomic) NSString *shareType;
@property (retain, nonatomic) NSString *userInfo;
@property (nonatomic) int statusBarStyle;
@property (nonatomic) BOOL forceOpenVoice;
@property (retain, nonatomic) NSString *canvasDynamicInfo;
@property (nonatomic) BOOL canvasFullScreen;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateAdCanvasPageListWithinMaxCount:(unsigned long long)a0;
- (BOOL)hasLoadAllVisiblePages;
- (id)fetchFirstComponentWithAvailableImage;
- (BOOL)canShowTwistAnimation;
- (id)fetchTransitionImgInfoForTwistAnimation;
- (BOOL)canShowShakeAnimation;
- (id)fetchTransitionImgInfosForShakeAnimation;
- (id)fetchTransitionAnimationInfoForShakeAnimation;
- (id)fetchRandomEncoreInfo;
- (id)fetchRandomEncorePickInfo;
- (id)fetchRandomPickComponentCardInfo;
- (id)fetchDefaultComponentItemForTwistAnimation;
- (BOOL)isSpecialFinderRedEnvelopeCanvas;
- (void).cxx_destruct;

@end
