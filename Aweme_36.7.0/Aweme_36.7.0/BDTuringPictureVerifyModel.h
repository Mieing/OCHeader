@interface BDTuringPictureVerifyModel : BDTuringVerifyModel

@property (nonatomic) double defaultWidth;
@property (nonatomic) double defaultHeight;
@property (nonatomic) long long challengeCode;

+ (id)modelWithCode:(long long)a0;

- (id)createVerifyView;
- (void)appendKVToQueryParameters:(id)a0;
- (void)appendKVToEventParameters:(id)a0;
- (void)configVerifyView:(id)a0;
- (id)init;

@end
