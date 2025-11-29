@class NSString, NSDictionary;

@interface IESECListKitSliceLiveCardData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sliceName;
@property (copy, nonatomic) NSString *sliceInhouseUrl;
@property (copy, nonatomic) NSString *sliceOnlineUrl;
@property (copy, nonatomic) NSDictionary *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
