@class NSString;

@interface AWEHPTabGuidePitayaButtonResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) long long playPctEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
