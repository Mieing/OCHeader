@class MMImage;

@interface WCMediaImageViewModel_MMImage : WCMediaImageViewModel

@property (readonly, nonatomic) MMImage *mmImage;

- (id)initWithMMImage:(id)a0;
- (BOOL)isLivePhoto;
- (void)fillExtraDataInImageMaterial:(id)a0;
- (void).cxx_destruct;

@end
