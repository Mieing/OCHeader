@class NSData, NSString, NSDictionary;

@interface BDECWSMessage : NSObject <BDECWSMessageProtocol>

@property (nonatomic) unsigned long long sequenceId;
@property (nonatomic) unsigned long long logId;
@property (nonatomic) int method;
@property (nonatomic) int service;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadEncoding;
@property (copy, nonatomic) NSDictionary *headers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
