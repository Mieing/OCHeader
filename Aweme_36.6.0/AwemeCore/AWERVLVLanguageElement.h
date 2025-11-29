@class NSString, AWERVLVLanguageView;

@interface AWERVLVLanguageElement : AWERVVideoInfoBaseElement <AWERVLVLanguageViewDelegate>

@property (retain, nonatomic) AWERVLVLanguageView *languageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSupportMultiLanguage;
- (long long)getCurrentLanguageIndex;
- (void)trackLongVideoShowWithLanguageIndex:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
