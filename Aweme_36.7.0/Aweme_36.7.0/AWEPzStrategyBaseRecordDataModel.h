@class NSString;

@interface AWEPzStrategyBaseRecordDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double recordTimestampLimit;
@property (nonatomic) BOOL recordFromUid;
@property (nonatomic) BOOL scopeShareRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
