@class NSString, FinderJumpInfo_Style, WCFinderFeedContentVM, WCFinderPostSourceInfo, WCFinderContact, NSDictionary, WAAppTaskHandlerWrapper, WCFinderLiteAppExtraParams, WCFinderShareEntranceMessageInfo;
@protocol MMLiveMorphDismissTarget, WCCanvasHalfScreenViewControllerDelegate, WCFinderCardWebViewControllerDelegate, WCFinderCollectionHalfScreenViewControllerDelegate, WCFinderFeedHighlightsPanelDelegate, WCAdFinderDialogViewControllerDelegate;

@interface WCFinderJumpInfoParams : NSObject

@property (retain, nonatomic) FinderJumpInfo_Style *defaultStyle;
@property (retain, nonatomic) FinderJumpInfo_Style *style;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) int fromCommentScene;
@property (weak, nonatomic) id<WCFinderCardWebViewControllerDelegate> cardWebDelegate;
@property (nonatomic) BOOL ignoreCheckCardWebDelegate;
@property (nonatomic) unsigned long long pos;
@property (nonatomic) unsigned long long streamEntranceType;
@property (retain, nonatomic) WCFinderContact *contact;
@property (copy, nonatomic) NSString *topicContent;
@property (retain, nonatomic) WCFinderPostSourceInfo *sourceInfo;
@property (nonatomic) BOOL showPostVideoToCommentAreaSwitch;
@property (copy, nonatomic) NSString *profilebypInfo;
@property (nonatomic) unsigned long long shareScene;
@property (nonatomic) unsigned long long miniAppScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (nonatomic) BOOL miniAppShowNativeNav;
@property (retain, nonatomic) NSString *finderId;
@property (retain, nonatomic) WAAppTaskHandlerWrapper *handlerWraper;
@property (copy, nonatomic) NSDictionary *miniAppExtraDict;
@property (nonatomic) BOOL needHiddenTemplateNav;
@property (nonatomic) BOOL useCustomHeight;
@property (nonatomic) double customHeight;
@property (nonatomic) BOOL useDarkModeLoadingForWeapp;
@property (nonatomic) BOOL preferNoRelaunch;
@property (retain, nonatomic) WCFinderLiteAppExtraParams *liteAppExtraParams;
@property (weak, nonatomic) id<WCCanvasHalfScreenViewControllerDelegate> adCanvasDelegate;
@property (nonatomic) BOOL shouldCheckCanvasDelegate;
@property (nonatomic) long long sectionIndex;
@property (retain, nonatomic) NSString *livingJumperAdReportInfo;
@property (nonatomic) BOOL enableBulletComment;
@property (nonatomic) BOOL showLoadingView;
@property (copy, nonatomic) NSString *uxinfo;
@property (weak, nonatomic) id<WCAdFinderDialogViewControllerDelegate> adDialogDelegate;
@property (weak, nonatomic) id<WCFinderCollectionHalfScreenViewControllerDelegate> collectionDelegate;
@property (retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo;
@property (nonatomic) unsigned long long livingIconType;
@property (nonatomic) BOOL fakeLiveMorphTransition;
@property (weak, nonatomic) id<MMLiveMorphDismissTarget> liveMorphDismissTarget;
@property (retain, nonatomic) NSString *navigationLeftIconName;
@property (nonatomic) unsigned long long postEnterScene;
@property (nonatomic) BOOL canDuetShootPublish;
@property (copy, nonatomic) id /* block */ liteAppStoreBlock;
@property (nonatomic) BOOL forceLightMode;
@property (weak, nonatomic) id<WCFinderFeedHighlightsPanelDelegate> highlightsPanelDelegate;
@property (retain, nonatomic) NSDictionary *searchTemplateParams;
@property (nonatomic) unsigned long long searchEditState;

- (id)init;
- (id)initWithStyle:(id)a0;
- (void).cxx_destruct;

@end
