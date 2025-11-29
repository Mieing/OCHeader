@class NSString, NSNumber;

@interface AWEECShareApiTrackObject : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromSecUserId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSString *shareChannel;
@property (copy, nonatomic) NSString *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *isEcsExist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
