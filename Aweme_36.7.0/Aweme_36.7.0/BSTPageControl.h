@class NSString;

@interface BSTPageControl : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) BOOL originReport;
@property (nonatomic) BOOL bstReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
