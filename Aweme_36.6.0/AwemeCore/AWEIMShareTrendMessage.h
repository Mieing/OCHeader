@class NSString, NSArray, AWEURLModel;

@interface AWEIMShareTrendMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *UGID;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *flashMobId;
@property (copy, nonatomic) NSString *flashMobTitle;
@property (copy, nonatomic) NSString *trendID;
@property (copy, nonatomic) NSString *trendTitle;
@property (copy, nonatomic) NSString *userCount;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSArray *trendMaterialList;
@property (copy, nonatomic) NSString *originalItemID;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (id)decodeWithJSONString:(id)a0;
- (id)JSONStringEncodeForTrendMaterials:(id)a0;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
