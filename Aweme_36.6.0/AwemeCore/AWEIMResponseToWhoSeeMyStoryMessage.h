@class NSString, AWEIMTextMessage, AWEURLModel;

@interface AWEIMResponseToWhoSeeMyStoryMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) NSString *storyComment;
@property (retain, nonatomic) NSString *storyID;
@property (retain, nonatomic) AWEURLModel *storyCoverURL;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) BOOL syncAweme;
@property (nonatomic) struct CGSize { double width; double height; } commentSize;
@property (retain, nonatomic) AWEIMTextMessage *commentTextMsg;
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
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;

@end
