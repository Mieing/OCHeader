@class NSString;

@interface AWEPrfJatFastImageOpt : NSObject <FastAssetImageDelegate>

@property (nonatomic) BOOL jatoEnabled;
@property (nonatomic) BOOL jatoSVGEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)themeDidChange:(id)a0;
- (id)jtfa_imageUUIDWithName:(id)a0 bundle:(id)a1;
- (void)jtfa_loadImageErrorWithCode:(unsigned long long)a0 description:(id)a1;

@end
