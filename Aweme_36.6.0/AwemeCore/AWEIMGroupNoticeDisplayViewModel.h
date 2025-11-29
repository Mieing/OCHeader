@class AWEIMMessageConversation, NSString, AWEIMLinkTextUtility, NSArray, NSAttributedString;

@interface AWEIMGroupNoticeDisplayViewModel : NSObject <AWEIMGroupNoticeDisplayViewViewModelProtocol>

@property (retain, nonatomic) AWEIMLinkTextUtility *textUtility;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *timelabelText;
@property (copy, nonatomic) NSAttributedString *contentAttributedLabelText;
@property (copy, nonatomic) NSString *contentLabelText;
@property (copy, nonatomic) NSString *subContentText;
@property (nonatomic) BOOL noticeScrollable;
@property (nonatomic) BOOL useLinkLabel;
@property (copy, nonatomic) NSArray *multiAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setup;
- (void)updateAttributedLabel;
- (void)view_viewWillAppear;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
