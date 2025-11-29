@class NSString;

@interface IESECMallInnerFeedAuthorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *kolID;
@property (copy, nonatomic) NSString *secKolID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
