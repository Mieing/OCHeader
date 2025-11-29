@class NSString, NSData, IESLiveAioLinkError;

@interface IESLiveAioLinkWriteChannel : GPBMessage

@property (copy, nonatomic) NSString *channelId;
@property (readonly, nonatomic) int payloadOneOfCase;
@property (copy, nonatomic) NSData *data_p;
@property (retain, nonatomic) IESLiveAioLinkError *error;
@property (nonatomic) int contentType;

+ (id)descriptor;

@end
