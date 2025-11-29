@class NSString;

@interface CMCTopLiveRankModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
