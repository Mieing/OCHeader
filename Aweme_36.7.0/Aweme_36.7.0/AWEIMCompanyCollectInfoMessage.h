@class NSString, NSDictionary;

@interface AWEIMCompanyCollectInfoMessage : AWEIMLynxContainerBaseMessage <AWEIMMessageConfigProtocol>

@property (nonatomic) double androidHeight;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *adExtraData;
@property (nonatomic) long long position;
@property (nonatomic) double lynxViewCommendHeight;
@property (copy, nonatomic) NSDictionary *contentDict;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *lynxTemplate;
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
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
