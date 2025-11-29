@class NSString;

@interface SECWebSafetyRulerPolicy : NSObject <SECWebSafetyPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryItemsWithDecoding:(id)a0;

- (id)executePagePolicy:(id)a0;
- (BOOL)filterOutPageURL:(id)a0 inWebView:(id)a1;

@end
