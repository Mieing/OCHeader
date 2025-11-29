@class NSString, AWEECPostShareInfoResponse;

@interface AWEECPostItemResponse : IESECBaseApiModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECPostShareInfoResponse *shareInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
