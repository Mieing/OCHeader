@class NSString, NSDictionary, BDECPigeonReferMessageInfo;

@interface BDECPigeonSendMessageV2 : NSObject

@property (copy) NSString *groupChatIdempotentId;
@property (copy) NSString *groupChatIdempotentId;
@property (copy) NSString *content;
@property (copy) NSString *messageType;
@property long long roleType;
@property (copy) NSString *bizRole;
@property (copy) NSDictionary *bizExt;
@property (copy) NSDictionary *localExt;
@property BOOL isSaveDB;
@property BOOL skipSendAndMarkFailed;
@property (retain) BDECPigeonReferMessageInfo *referMessageInfo;

@end
