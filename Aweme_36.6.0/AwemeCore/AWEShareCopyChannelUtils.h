@class NSString;

@interface AWEShareCopyChannelUtils : NSObject <AWEShareCopyChannelUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableShareCopyChannel:(id)a0;
+ (void)shortenCopyURLWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)updateContextWithShortURL:(id)a0 context:(id)a1;


@end
