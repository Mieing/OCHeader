@class NSString, AWEUserModel;

@interface AWEIMTopGreetingMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEUserModel *peerUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (double)bubbleMaxWidth;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (long long)templateType;

@end
