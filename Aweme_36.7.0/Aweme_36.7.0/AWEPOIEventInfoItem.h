@class NSString, NSArray;

@interface AWEPOIEventInfoItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSArray *androidOwner;
@property (copy, nonatomic) NSArray *iosOwner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)validateOwnersIsString:(id)a0;
- (void).cxx_destruct;
- (BOOL)validate:(id *)a0;

@end
