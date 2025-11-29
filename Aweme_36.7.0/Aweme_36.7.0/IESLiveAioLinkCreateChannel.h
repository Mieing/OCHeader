@class NSString;

@interface IESLiveAioLinkCreateChannel : GPBMessage

@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *interfaceId;
@property (copy, nonatomic) NSString *methodId;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) int preferredContentType;

+ (id)descriptor;

@end
