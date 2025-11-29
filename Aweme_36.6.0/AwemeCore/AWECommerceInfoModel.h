@class NSNumber, NSString;

@interface AWECommerceInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *offlineInfoType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *linkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
