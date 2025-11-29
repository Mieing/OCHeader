@class NSNumber, NSString;

@interface AWELuckyCatPopupSpaceModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *topSpace;
@property (retain, nonatomic) NSNumber *bottomSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
