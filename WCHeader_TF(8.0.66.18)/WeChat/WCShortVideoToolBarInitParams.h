@class FinderVideoTemplateInfo, NSString, NSArray, NSMutableArray, RecommendedMusicInfo;

@interface WCShortVideoToolBarInitParams : NSObject

@property (nonatomic) unsigned long long cameraMode;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL canRelayoutSubviews;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (nonatomic) unsigned long long uiStyle;
@property (nonatomic) BOOL needMaasEffect;
@property (retain, nonatomic) NSString *shortURLForPreviewingTemplate;
@property (retain, nonatomic) FinderVideoTemplateInfo *templateInfo;
@property (nonatomic) unsigned long long finderEventId;
@property (retain, nonatomic) NSArray *toolbarBtnOrder;
@property (copy, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *wxToMaasMusicIds;
@property (nonatomic) double contentBottomPadding;

- (void).cxx_destruct;

@end
