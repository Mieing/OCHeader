@class NSString;

@interface TempEmoticonCDNDownloaderImpl : NSObject <TempEmoticonCDNDownloaderBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)download:(id)a0 savePath:(id)a1 url:(id)a2 isWxam:(BOOL)a3 isTP:(BOOL)a4 authKey:(id)a5;

@end
