@class NSString;

@interface AWEDeliveryChatRiderPhoneInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showPhoneEntry;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *riderId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
