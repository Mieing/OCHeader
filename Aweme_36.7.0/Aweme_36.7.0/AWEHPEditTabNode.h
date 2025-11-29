@class NSString, NSArray;

@interface AWEHPEditTabNode : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) NSArray *subChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subChannelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
