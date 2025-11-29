@class NSString;

@interface AWEConmpanyUserCertReviewInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *forbidUpdateReason;
@property (nonatomic) BOOL canUpdateNow;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
