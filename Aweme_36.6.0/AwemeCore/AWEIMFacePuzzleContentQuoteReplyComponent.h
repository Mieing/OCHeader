@class NSString, AWEIMFacePuzzleMessage;

@interface AWEIMFacePuzzleContentQuoteReplyComponent : AWEIMFacePuzzleContentComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMFacePuzzleMessage *message;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)initPresenter;
- (void)initProps;
- (void).cxx_destruct;
- (id)displayMessage;

@end
