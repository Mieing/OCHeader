@class NSString, NSDictionary, AWEURLModel;

@interface AWEIMShareStoreMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *shopDescription;
@property (copy, nonatomic) NSString *secShopID;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
