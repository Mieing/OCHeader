@class NSString, AWEURLModel;

@interface AWEIMVideoCommentMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *comment;
@property (retain, nonatomic) AWEURLModel *videoCover;
@property (nonatomic) long long mediaType;
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
- (BOOL)shouldChangeVisibleStatus;
- (id)itemIDUsedForContentAvailableRefresh;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
