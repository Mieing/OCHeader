@class NSString;

@interface AWEECOMIMChatDetailCheckReportV2Model : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long reasonCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *reportUrl;
@property (copy, nonatomic) NSString *reportDetailUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
