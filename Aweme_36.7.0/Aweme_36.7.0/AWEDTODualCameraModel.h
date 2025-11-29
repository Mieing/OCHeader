@class NSString;

@interface AWEDTODualCameraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isDual;
@property (copy, nonatomic) NSString *subTrackPath;
@property (nonatomic) BOOL isReal;
@property (nonatomic) long long firstCameraPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
