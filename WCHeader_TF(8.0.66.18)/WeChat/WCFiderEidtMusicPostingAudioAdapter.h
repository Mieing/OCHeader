@class NSString, NSMutableDictionary;
@protocol WCFiderEidtMusicPostingAudioAdapterDelegate;

@interface WCFiderEidtMusicPostingAudioAdapter : NSObject <WCFinderEditMusicMediaAudioUrlAdapter>

@property (weak, nonatomic) id<WCFiderEidtMusicPostingAudioAdapterDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *videoMapAudioUrls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterWithDelegate:(id)a0;

- (void)fetchDataItemMediaAudioUrl:(id /* block */)a0;
- (void).cxx_destruct;

@end
