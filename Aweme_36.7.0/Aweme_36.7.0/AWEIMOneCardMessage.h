@class NSString;

@interface AWEIMOneCardMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *oneCardSchema;
@property (copy, nonatomic) NSString *oneCardDescription;
@property (copy, nonatomic) NSString *oneCardPushDetail;
@property (copy, nonatomic) NSString *oneCardId;
@property (nonatomic) double oneCardSizeWidth;
@property (nonatomic) double oneCardSizeHeight;
@property (copy, nonatomic) NSString *oneCardSupportVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (BOOL)isCurrentVersionSupportWithContentDict:(id)a0;
+ (BOOL)enableOneCardSchemaWithContentDict:(id)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (struct CGSize { double x0; double x1; })getAdjustedSize;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
