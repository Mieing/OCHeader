@class NSString, WAAppAuthRespData, WAContact, NSMutableArray;

@interface WAAuthManagerViewController : ZZFLEXCollectionViewController <WAAppDetailInfoManagerExtension, MMNavBarInteractiveDelegate>

@property (nonatomic) BOOL isEditMode;
@property (retain, nonatomic) NSMutableArray *editList;
@property (readonly, nonatomic) WAContact *contact;
@property (readonly, nonatomic) WAAppAuthRespData *authData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 authData:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)reloadUI;
- (void)deleteUserInfo:(id)a0;
- (void)onGetAppAuthInfo:(id)a0 appid:(id)a1 errorCode:(int)a2;
- (void)onDeleteAppUseUserInfo:(id)a0 errorCode:(int)a1 errMsg:(id)a2;
- (id)editedItemByDeleteList:(id)a0;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void).cxx_destruct;

@end
