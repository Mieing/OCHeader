@class NSString;

@interface AWEECOrderCounterResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showCountDesc;
@property (copy, nonatomic) NSString *updateSendId;
@property (nonatomic) BOOL showIconTag;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSString *orderListSchema;
@property (nonatomic) long long tabID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
