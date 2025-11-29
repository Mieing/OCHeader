@class CSJAdInfoViewModel, CSJFullLinkTrackInfo;

@interface CSJRenderEngineViewModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) CSJAdInfoViewModel *infoViewModel;
@property (retain, nonatomic) CSJFullLinkTrackInfo *fullLinkTrackInfo;
@property (nonatomic) long long renderIndex;

- (void)addTrackInfoWithKey:(id)a0 userInfo:(id)a1;
- (id)originInfoDictionary;
- (id)jsCallNative_adInfoWithValid:(BOOL *)a0;
- (id)jsCallNative_getTemplateInfoWithValid:(BOOL *)a0;
- (id)initWithInfoViewModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1 renderIndex:(long long)a2;
- (id)jsCallNative_appInfo;
- (void).cxx_destruct;

@end
