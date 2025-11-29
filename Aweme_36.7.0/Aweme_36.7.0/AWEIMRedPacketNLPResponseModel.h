@class NSString, NSError;

@interface AWEIMRedPacketNLPResponseModel : IESIMBaseApiModel <MTLJSONSerializing>

@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
