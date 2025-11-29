@class NSArray, NSString, HTSLiveJoinGroupChatGuideContent;

@interface IESLiveInteractionChatGroupPanelViewModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) HTSLiveJoinGroupChatGuideContent *joinContent;

- (void).cxx_destruct;

@end
