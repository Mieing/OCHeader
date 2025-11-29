@class NSString;

@interface AWESearchDiscussTabModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long sortType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL isHotspot;
@property (nonatomic) BOOL isIndependentRecall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
