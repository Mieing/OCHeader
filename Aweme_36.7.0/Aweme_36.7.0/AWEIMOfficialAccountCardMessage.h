@class NSString, AWEIMUser, AWEIMServiceChatRoleExpressionResponse;

@interface AWEIMOfficialAccountCardMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) BOOL isExpand;
@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *localIconName;
@property (retain, nonatomic) AWEIMUser *refreshUser;
@property (retain, nonatomic) AWEIMServiceChatRoleExpressionResponse *roleExpression;
@property (nonatomic) BOOL visable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (double)bubbleMaxWidth;
- (void)expandContent;
- (void)caculateSize;
- (struct CGSize { double x0; double x1; })contentTextSize;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (long long)templateType;
- (id)contentText;

@end
