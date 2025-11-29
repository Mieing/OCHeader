@class NSString;

@interface AWELifeFeedSpuCardEvent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sortId;
@property (copy, nonatomic) NSString *reqId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
