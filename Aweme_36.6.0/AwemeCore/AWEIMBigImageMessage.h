@class NSString, NSDictionary;

@interface AWEIMBigImageMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSDictionary *timorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
