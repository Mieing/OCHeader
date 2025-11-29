@class NSString;

@interface IESLiveInteractionLinkerReplyParams : IESLiveInteractionLinkerParams

@property (nonatomic) unsigned long long replyType;
@property (nonatomic) long long linkType;
@property (copy, nonatomic) NSString *replyToUserSecID;
@property (nonatomic) unsigned long long inviteSource;

- (void).cxx_destruct;

@end
