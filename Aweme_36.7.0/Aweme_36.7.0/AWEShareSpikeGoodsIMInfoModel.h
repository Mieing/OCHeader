@class NSNumber, NSString;

@interface AWEShareSpikeGoodsIMInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *messageType;
@property (copy, nonatomic) NSString *messageContent;
@property (copy, nonatomic) NSString *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
