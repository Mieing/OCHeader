@class NSDictionary;

@interface BDECIMSendMessage : NSObject

@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (copy, nonatomic) NSDictionary *localExt;
@property (nonatomic) BOOL skipSend;
@property (nonatomic) BOOL skipSendAndMarkFailed;
@property (nonatomic) BOOL isSaveDB;

- (void).cxx_destruct;
- (id)init;

@end
