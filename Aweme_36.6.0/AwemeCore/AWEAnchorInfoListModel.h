@class NSArray, NSString;

@interface AWEAnchorInfoListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *anchorsInfo;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL filtered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
