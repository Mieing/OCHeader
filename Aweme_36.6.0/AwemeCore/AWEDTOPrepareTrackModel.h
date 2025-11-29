@class NSString;

@interface AWEDTOPrepareTrackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *presetEventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
