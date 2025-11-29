@class NSString, NSDictionary;

@interface BDECPigeonP2PMessageV2 : NSObject

@property (nonatomic) long long sendType;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) int messageType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) long long createTime;

- (id)initWithIMCloudP2PMessage:(id)a0;
- (void).cxx_destruct;

@end
