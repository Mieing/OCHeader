@class NSString;

@interface AWEFeedSubtitleDataController : NSObject <AWEFeedSubtitleDataControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestSubtitleWithModel:(id)a0 languageID:(long long)a1 completion:(id /* block */)a2;
+ (void)setupSelectedLanguageID:(long long)a0;
+ (void)trackChangeSubtitleStatusWithEnterMethod:(unsigned long long)a0 enterFrom:(id)a1 model:(id)a2 toStatus:(BOOL)a3 fromLanguage:(long long)a4 toLanguage:(long long)a5;


@end
