@class NSString, AWEPOIServiceSpuEntryModel;

@interface AWEPOIAnchorBehaviorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *spuID;
@property (nonatomic) unsigned long long spuType;
@property (nonatomic) unsigned long long spuPlatformSource;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *spuEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
