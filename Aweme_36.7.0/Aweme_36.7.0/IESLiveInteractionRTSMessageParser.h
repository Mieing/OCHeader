@interface IESLiveInteractionRTSMessageParser : NSObject

+ (BOOL)isLinkMicRTSServerUID:(id)a0;
+ (id)parseLinkMicRTSData:(id)a0 from:(id)a1 error:(id *)a2;
+ (id)parseLinkMicRTSMessage:(id)a0 from:(id)a1 error:(id *)a2;

@end
