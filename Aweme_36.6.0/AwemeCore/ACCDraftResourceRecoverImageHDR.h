@class NSString;

@interface ACCDraftResourceRecoverImageHDR : ACCDraftResourceRecoverTask <ACCDraftResourceRecoverImageHDRProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithDraft:(id)a0 repository:(id)a1 completion:(id /* block */)a2;

@end
