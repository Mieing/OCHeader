@class NSString;

@interface AWELiveShareFansDataManager : NSObject <AWEIMShareContactListLocalExternalDataSourceProtocol> {
    NSString *uniqueSourceKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)uniqueSourceKey;
- (void)setUniqueSourceKey:(id)a0;
- (void)fetchShareContactListWithContext:(id)a0 completion:(id /* block */)a1;
- (id)userLabelTypeWithTextType:(int)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
