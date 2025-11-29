@class NSString;

@interface AWEUGCustomsLastFeedItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) long long awemeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
