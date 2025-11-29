@class NSString, NSData;

@interface FlowLinkSDK.FlowLinkMessageWrapper : _TtCs12_SwiftObject <FlowLinkSDK.FlowLinkMessage> {
    void /* unknown type, empty encoding */ _channelType;
    void /* unknown type, empty encoding */ _modalType;
    void /* unknown type, empty encoding */ _sequenceId;
    void /* unknown type, empty encoding */ _statusCode;
    void /* function */ data;
    void /* function */ customSignalPacket;
}

@property (nonatomic) long long cmd;
@property (nonatomic) long long channelType;
@property (nonatomic) long long modalType;
@property (nonatomic, copy) NSString *sequenceId;
@property (nonatomic) long long statusCode;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSData *customSignalPacket;

@end
