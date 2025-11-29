@class NSString;

@interface AWEProfileRankModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textColorStart;
@property (copy, nonatomic) NSString *textColorEnd;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *bgColorStart;
@property (copy, nonatomic) NSString *bgColorEnd;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *rankSchema;
@property (nonatomic) unsigned long long rankType;
@property (copy, nonatomic) NSString *rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
