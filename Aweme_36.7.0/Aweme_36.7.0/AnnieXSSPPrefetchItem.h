@class NSString;

@interface AnnieXSSPPrefetchItem : NSObject <AnnieXSSPPrefetchItemProtocol>

@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *custom;
@property (copy, nonatomic) NSString *resourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
