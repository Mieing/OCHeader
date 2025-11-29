@class NSString;

@interface AWEFeedPlayableMaskColorInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *section;
@property (copy, nonatomic) NSString *bgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
