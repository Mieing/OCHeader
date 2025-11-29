@class NSString, AWEURLModel;

@interface AWEIMSharePoiRankMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *updateTime;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *rankCode;
@property (nonatomic) BOOL canSwitch;
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
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
