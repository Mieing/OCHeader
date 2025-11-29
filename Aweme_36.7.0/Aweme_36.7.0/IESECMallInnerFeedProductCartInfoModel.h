@class NSString;

@interface IESECMallInnerFeedProductCartInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL cartAddibleStatus;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
