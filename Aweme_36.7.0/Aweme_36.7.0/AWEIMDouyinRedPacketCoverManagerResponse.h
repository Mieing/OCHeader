@class NSString, AWEIMDouyinRedPacketCoverModel;

@interface AWEIMDouyinRedPacketCoverManagerResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retMsg;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverInfo;
@property (nonatomic) long long recvStatus;

+ (id)coverInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)getReceiveStatus;
- (void).cxx_destruct;

@end
