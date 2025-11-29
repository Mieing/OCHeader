@class NSString;

@interface AWEWatchLaterRecommendTipsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) long long showTimeStamp;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
