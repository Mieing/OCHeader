@class NSString;

@interface AWEOpenAuthInfoClientDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoClientDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSString *clientIcon;
@property (nonatomic) long long clientInner;
@property (nonatomic) long long clientAppType;
@property (nonatomic) long long clientInternalType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
