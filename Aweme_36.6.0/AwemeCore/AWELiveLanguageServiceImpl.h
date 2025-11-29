@class RACSignal, NSString, RACSubject;

@interface AWELiveLanguageServiceImpl : NSObject <IESLiveLanguageService>

@property (retain, nonatomic) RACSubject *languageSubject;
@property (retain, nonatomic) RACSubject *interfaceLanguageSubject;
@property (readonly, nonatomic) RACSignal *languageChanged;
@property (readonly, nonatomic) RACSignal *interfaceLC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentInterfaceLC;
- (id)hostCurrentLanguageCode;
- (void)disableHostLocalizations:(id)a0;
- (void)enableHostRTLFlipForView:(id)a0;
- (id)currentRegion;
- (void).cxx_destruct;
- (id)locale;
- (id)currentLanguageCode;
- (void)dealloc;

@end
