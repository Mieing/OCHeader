@class NSString, AWEURLModel;

@interface AWEIMNewAwemeMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMFeedDetailLoadingAnimationMessageProtocol>

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) AWEURLModel *originCoverURL;
@property (copy, nonatomic) NSString *awemeDetail;
@property (nonatomic) long long awemeCount;
@property (nonatomic) long long awemeCreateTime;
@property (copy, nonatomic) NSString *secUid;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, copy, nonatomic) NSString *displayDetail;
@property (readonly, copy, nonatomic) NSString *createTimeReadableString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLoadingAnimating;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)shouldChangeVisibleStatus;
- (id)itemIDUsedForContentAvailableRefresh;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (long long)templateType;

@end
