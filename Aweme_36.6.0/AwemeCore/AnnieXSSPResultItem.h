@class NSArray, NSString;

@interface AnnieXSSPResultItem : NSObject <AnnieXSSPResultItemProtocol>

@property (copy, nonatomic) NSArray *prefetchList;
@property (copy, nonatomic) NSArray *preconnectList;
@property (copy, nonatomic) NSArray *subpagePreconnectList;
@property (nonatomic) long long validityPeriod;
@property (nonatomic) long long matchType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
