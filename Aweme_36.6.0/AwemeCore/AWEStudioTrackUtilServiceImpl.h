@class NSString;

@interface AWEStudioTrackUtilServiceImpl : NSObject <AWEStudioTrackUtilService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mvTypeStringFromMVType:(long long)a0 isImageTemplate:(BOOL)a1;
- (id)mvProviderFromAwemeModel:(id)a0;
- (id)mvAbilityFromAwemeModel:(id)a0;

@end
