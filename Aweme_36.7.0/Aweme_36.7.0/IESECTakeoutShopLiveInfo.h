@class NSString, IESECTakeoutShopUrlStruct;

@interface IESECTakeoutShopLiveInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *streamData;
@property (readonly, copy, nonatomic) NSString *fpid;
@property (readonly, copy, nonatomic) NSString *webSocketAppKey;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) IESECTakeoutShopUrlStruct *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
