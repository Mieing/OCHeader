@class NSString;

@interface AWEIMUrgeGenerateContentMessage : AWEIMTextMessage

@property (nonatomic) long long urgeIndex;
@property (copy, nonatomic) NSString *indexText;
@property (copy, nonatomic) NSString *urgeCycleId;
@property (nonatomic) struct CGSize { double width; double height; } urgeSceneDescSize;
@property (nonatomic) BOOL isFromGroupOwner;

+ (Class)viewModelClass;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
