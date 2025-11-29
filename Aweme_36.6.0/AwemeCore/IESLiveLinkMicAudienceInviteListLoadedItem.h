@class NSString;

@interface IESLiveLinkMicAudienceInviteListLoadedItem : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
