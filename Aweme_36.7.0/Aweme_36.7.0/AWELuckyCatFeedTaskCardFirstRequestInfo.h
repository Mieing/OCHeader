@class NSString;

@interface AWELuckyCatFeedTaskCardFirstRequestInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableInsert;
@property (nonatomic) long long delayDuration;
@property (copy, nonatomic) NSString *guideText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
