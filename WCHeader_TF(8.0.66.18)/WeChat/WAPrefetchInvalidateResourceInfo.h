@class NSString, NSMutableDictionary;

@interface WAPrefetchInvalidateResourceInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *invalidateCodeTokens;
@property (retain, nonatomic) NSMutableDictionary *invalidateContactTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_invalidateCodeTokens;
+ (void)PBArrayAdd_invalidateContactTokens;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
