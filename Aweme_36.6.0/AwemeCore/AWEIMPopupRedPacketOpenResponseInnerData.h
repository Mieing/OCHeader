@class AWEIMPopupRedPacketOpenDetailData, NSString;

@interface AWEIMPopupRedPacketOpenResponseInnerData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMPopupRedPacketOpenDetailData *openDetailData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openDetailDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
