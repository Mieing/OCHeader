@class NSString, NSNumber, AWEIMPopupRedPacketOpenResponseInnerData;

@interface AWEIMPopupRedPacketOpenResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *errorTips;
@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) AWEIMPopupRedPacketOpenResponseInnerData *openResponseInnerData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openResponseInnerDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
