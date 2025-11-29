@class NSString;

@interface HTSLiveCreateGroupChatGuideContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *bodyText;

+ (id)descriptor;

@end
