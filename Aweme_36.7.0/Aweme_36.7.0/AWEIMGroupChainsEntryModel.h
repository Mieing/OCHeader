@class NSString;

@interface AWEIMGroupChainsEntryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *entryId;
@property (copy, nonatomic) NSString *createUid;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
