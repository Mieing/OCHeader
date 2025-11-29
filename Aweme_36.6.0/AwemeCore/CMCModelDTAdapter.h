@class NSString;

@interface CMCModelDTAdapter : HTSService <CMCModelDTAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldUseCommerceMusic:(id)a0;
- (BOOL)enableEnterQuickFlashView:(id)a0;
- (BOOL)hasLinkPermission:(id)a0;
- (BOOL)hasJoinInLink:(id)a0;
- (BOOL)shouldAuthorizedLink:(id)a0;

@end
