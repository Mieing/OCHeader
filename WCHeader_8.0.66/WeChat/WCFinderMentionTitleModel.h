@class NSArray, WCFinderMention, NSString, WCFinderAuthInfo;

@interface WCFinderMentionTitleModel : NSObject

@property (retain, nonatomic) WCFinderMention *mention;
@property (nonatomic) unsigned long long aggregatedCount;
@property (copy, nonatomic) NSArray *aggregatedContacts;
@property (nonatomic) unsigned long long aggregatedContactMaxLine;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *suffixTitle;
@property (retain, nonatomic) WCFinderAuthInfo *authInfo;
@property (nonatomic) BOOL shouldShowFinderLogo;
@property (copy, nonatomic) NSString *timeString;
@property (nonatomic) BOOL shouldShowFollowBtn;
@property (copy, nonatomic) NSArray *interactionLabels;

- (id)init;
- (id)aggregatedSuffixContentWithEllipsis:(BOOL)a0;
- (id)getAccessibilityLabel;
- (void).cxx_destruct;

@end
