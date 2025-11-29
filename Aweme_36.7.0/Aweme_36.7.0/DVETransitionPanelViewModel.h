@class DVETransitionItemModel, NSString, NSIndexPath, DVETransitionPanelModel;
@protocol DVEResourceCategoryModelProtocol, DVETransitionPanelContextProtocol, DVETransitionPanelTrackDelegate, DVEResourceModelProtocol;

@interface DVETransitionPanelViewModel : NSObject

@property (nonatomic) int trackEffectCount;
@property (nonatomic) int trackTabCount;
@property (retain, nonatomic) DVETransitionItemModel *selectedItemModel;
@property (weak, nonatomic) id<DVETransitionPanelContextProtocol> context;
@property (nonatomic) long long selectedTabIndex;
@property (nonatomic) unsigned long long downloadSuccessSelectStatus;
@property (readonly, nonatomic) long long selectedItemIndex;
@property (retain, nonatomic) DVETransitionPanelModel *model;
@property (retain, nonatomic) NSIndexPath *selectedItemIndexPath;
@property (nonatomic) BOOL disableNoneItemModel;
@property (retain, nonatomic) id<DVEResourceModelProtocol> noneItemModel;
@property (readonly, nonatomic) NSString *selectedItemIdentifer;
@property (readonly, nonatomic) NSString *selectedTabName;
@property (readonly, nonatomic) id<DVEResourceCategoryModelProtocol> selectedTabModel;
@property (weak, nonatomic) id<DVETransitionPanelTrackDelegate> trackDelegate;

+ (id)dve_viewModelWithContext:(id)a0;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
