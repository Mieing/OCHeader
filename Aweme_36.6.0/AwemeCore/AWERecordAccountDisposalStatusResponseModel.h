@class NSNumber, NSString;

@interface AWERecordAccountDisposalStatusResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *isPunished;
@property (copy, nonatomic) NSString *popupSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
