@class NSString, NSDictionary, NSArray, BDECPigeonReferMessageInfo;

@interface BDECPigeonInnerSendMessage : NSObject

@property (copy) NSDictionary *content;
@property long long messageType;
@property (copy) NSDictionary *syncedExt;
@property (copy) NSDictionary *localExt;
@property BOOL skipSend;
@property BOOL skipSendAndMarkFailed;
@property BOOL isSaveDB;
@property (copy, nonatomic) NSString *preferredUUID;
@property (retain) BDECPigeonReferMessageInfo *referMessageInfo;
@property (copy, nonatomic) NSArray *mentionedUsers;

- (void).cxx_destruct;
- (id)init;

@end
