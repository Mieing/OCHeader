@class NSString;

@interface QQWebViewKit : NSObject <TCWebViewKitDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryByParseUrlFromSeparator:(id)a0 separator:(id)a1;
+ (id)JSONValue:(id)a0;
+ (BOOL)canHanleOpenUrlFromSafari:(id)a0;
+ (id)messageWithSafariUrl:(id)a0;


@end
