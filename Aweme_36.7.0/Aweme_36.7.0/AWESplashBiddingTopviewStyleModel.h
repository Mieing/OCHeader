@class NSDictionary, NSString;

@interface AWESplashBiddingTopviewStyleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long styleType;
@property (copy, nonatomic) NSDictionary *slideClickInfo;
@property (copy, nonatomic) NSDictionary *slideOnlyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
