@class NSString;

@interface BDXBridgeOnFeedbackSuccessMediaFiles : BDXBridgeModel

@property (copy, nonatomic) NSString *localUri;
@property (copy, nonatomic) NSString *onlineUri;
@property (copy, nonatomic) NSString *createTime;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
