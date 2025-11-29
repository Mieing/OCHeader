@interface BDTuringQAVerifyModel : BDTuringVerifyModel

@property (nonatomic) BOOL pop;

- (BOOL)supportLandscape;
- (id)createVerifyView;
- (void)appendKVToQueryParameters:(id)a0;
- (void)configVerifyView:(id)a0;
- (id)init;

@end
