@class NSString;

@interface WCFinderEditMusicMediaVideoUrlAdapter : NSObject <WCFinderEditMusicMediaAudioUrlAdapter>

@property (retain, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterWithURL:(id)a0;

- (void)fetchDataItemMediaAudioUrl:(id /* block */)a0;
- (void).cxx_destruct;

@end
