@class NSString, NSArray;

@interface AWEIMDouyinRedPacketCoverListResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *retCode;
@property (copy, nonatomic) NSString *retMsg;
@property (copy, nonatomic) NSArray *coverInfo;
@property (nonatomic) BOOL isCustomizedLimit;
@property (copy, nonatomic) NSString *customizedTips;
@property (copy, nonatomic) NSString *customizedText;
@property (nonatomic) BOOL isBlankListUser;
@property (copy, nonatomic) NSString *stickerId;

+ (id)coverInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
