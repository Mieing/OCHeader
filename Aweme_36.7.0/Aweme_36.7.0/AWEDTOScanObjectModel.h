@class NSString;

@interface AWEDTOScanObjectModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *scanEnterFrom;
@property (copy, nonatomic) NSString *scanType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
