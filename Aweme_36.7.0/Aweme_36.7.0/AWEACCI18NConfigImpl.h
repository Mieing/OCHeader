@class NSString, NSBundle;

@interface AWEACCI18NConfigImpl : NSObject <AWERegionMessage, ACCI18NConfigProtocol>

@property (copy, nonatomic) NSString *currentLanguage;
@property (copy, nonatomic) NSString *currentRegion;
@property (copy, nonatomic) NSString *defaultLanguage;
@property (retain, nonatomic) NSBundle *languageBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appRegionDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
