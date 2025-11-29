@class NSString;

@interface AWEIMSmartCardMessage : AWEIMLynxContainerBaseMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *templatesString;
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
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
