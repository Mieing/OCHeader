@class NSString, NSDictionary, NSValue, AWEURLModel;

@interface AWEPOIFeedUgcInfoTagContentModel : MTLModel <AWEPOIDetailFeedUgcCommonTagSizeModelProtocol, MTLJSONSerializing>

@property (retain, nonatomic) NSValue *tagSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long contentType;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSDictionary *uiParams;
@property (copy, nonatomic) NSDictionary *clickEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
