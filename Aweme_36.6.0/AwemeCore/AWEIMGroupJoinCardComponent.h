@class NSString;

@interface AWEIMGroupJoinCardComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) BOOL isSocialGroup;
@property (nonatomic) BOOL isPublicGroup;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)updateGroupJoinCardPresenterModel:(id)a0;
- (id)getGroupJoinCardPresenterModel;
- (void)updatePresenterWhenHasBackgroundWithProps:(id)a0;
- (void)didTapFunctionCellWithModel:(id)a0;
- (void)willDisplayFunctionCellWithModel:(id)a0;
- (void)trackerWithModel:(id)a0 conversation:(id)a1;
- (id)checkEntryEnableAndTrackWithModel:(id)a0 conversation:(id)a1;
- (void)adaptNoticeBackground;
- (id)displayMessage;
- (void)deleteMessage;

@end
