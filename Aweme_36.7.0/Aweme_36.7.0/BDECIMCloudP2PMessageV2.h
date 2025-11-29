@class NSString, NSMutableDictionary;

@interface BDECIMCloudP2PMessageV2 : NSObject <BDECIMCloudP2PMessageV2Interface>

@property (nonatomic) long long sendType;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) int messageType;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (nonatomic) long long createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
