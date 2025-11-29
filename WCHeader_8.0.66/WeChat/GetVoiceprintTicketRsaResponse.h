@class BuiltinIPList, NSString, HostList, NetworkControl, BaseResponse;

@interface GetVoiceprintTicketRsaResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *voiceprintTicket;
@property (retain, nonatomic) BuiltinIPList *builtinIplist;
@property (retain, nonatomic) HostList *newHostList;
@property (retain, nonatomic) NetworkControl *networkControl;
@property (nonatomic) unsigned int certRegion;
@property (nonatomic) unsigned int mmtlsControlBitFlag;

+ (void)initialize;

@end
