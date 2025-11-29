@class NSString, AWEUserModel;

@interface AWEIMUserLabelTopGreetingMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEUserModel *peerUser;
@property (nonatomic) BOOL hasAnyLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (void).cxx_destruct;
- (long long)templateType;

@end
