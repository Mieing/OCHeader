@class NSString, NSDictionary, AWEAwemeModel, AWEKnowledgeStateSceneToken, NSArray, AWEListDataController;
@protocol AFDPureModePageGoodsDelegate, AFDSpeedManagerProtocol, AFDPureModePageCommerceDelegate, AFDPureModePageMutiModelSourceProtocol;

@interface AFDPureModeConfiguration : NSObject

@property (nonatomic) unsigned long long fromScene;
@property (nonatomic) unsigned long long enterPinchMethod;
@property (nonatomic) BOOL canShowVisionSearchAnimation;
@property (copy, nonatomic) NSString *fromPage;
@property (nonatomic) double playerViewHeight;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *cityInfoString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEAwemeModel *enterModel;
@property (copy, nonatomic) NSString *commercePriorityType;
@property (nonatomic) unsigned long long slideMode;
@property (weak, nonatomic) id<AFDPureModePageCommerceDelegate> commerceDelegate;
@property (weak, nonatomic) id<AFDPureModePageGoodsDelegate> goodsDelegate;
@property (weak, nonatomic) id<AFDPureModePageMutiModelSourceProtocol> mutiModelDataSource;
@property (weak, nonatomic) AWEListDataController *externalDataController;
@property (weak, nonatomic) id<AFDSpeedManagerProtocol> speedManager;
@property (copy, nonatomic) id /* block */ getCurrentModelBlock;
@property (copy, nonatomic) id /* block */ getCurrentIndexBlock;
@property (retain, nonatomic) AWEKnowledgeStateSceneToken *lastSceneToken;
@property (nonatomic) BOOL isHideBottomPlayButton;
@property (nonatomic) BOOL isBottomPlayButtonOnlyControlClipMute;
@property (nonatomic) BOOL isSingleTapPlayerDisabled;
@property (nonatomic) BOOL isLongPressFastSpeedDisabled;
@property (nonatomic) unsigned long long livePhotoReplayOccasion;
@property (copy, nonatomic) id /* block */ setupRichContentAlbumContextBlock;
@property (copy, nonatomic) NSArray *componentArray;
@property (copy, nonatomic) NSDictionary *componentParamDict;

- (void).cxx_destruct;

@end
