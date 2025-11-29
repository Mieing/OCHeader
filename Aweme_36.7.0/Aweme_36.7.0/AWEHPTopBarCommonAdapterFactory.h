@class NSString;

@interface AWEHPTopBarCommonAdapterFactory : NSObject <AWEHPTopBarCommonAdapterFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEHPTopBarCommonAdapterClass;

- (id)getTopBarLeftEntrances;
- (id)aAWEHPTopBarCommonAdapter;

@end
