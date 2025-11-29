@class NSString;

@interface AWENearbyUploadMsgResponseDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
