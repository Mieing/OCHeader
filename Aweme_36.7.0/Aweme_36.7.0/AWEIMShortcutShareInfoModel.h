@class NSNumber, NSArray, NSString;

@interface AWEIMShortcutShareInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *imSharedForGroupType;
@property (copy, nonatomic) NSArray *imSharedGroupList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
