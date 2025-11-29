@class NSString, NSNumber;

@interface AWEPadGameLiveCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSNumber *watchCount;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *iconLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
