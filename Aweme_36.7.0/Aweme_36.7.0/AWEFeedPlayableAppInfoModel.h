@class NSString;

@interface AWEFeedPlayableAppInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long appInfoType;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
