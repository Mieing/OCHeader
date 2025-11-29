@class NSString;

@interface AWEDTOWorkSyncModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isSyncToUlike;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
