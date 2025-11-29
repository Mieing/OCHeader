@class NSString, NSDictionary;

@interface IESECLiveGoodsCarouselDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *fixedContent;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *contentColor;
@property (nonatomic) BOOL hasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
