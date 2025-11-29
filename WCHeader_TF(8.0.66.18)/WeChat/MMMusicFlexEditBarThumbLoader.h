@class NSString, NSArray, NSMutableDictionary;
@protocol MMMusicFlexEditBarThumbLoaderDelegate;

@interface MMMusicFlexEditBarThumbLoader : NSObject <WCFinderVideoDownLoadMgrExt, MMImageLoaderObserver> {
    NSArray *_arrTrackItem;
    NSMutableDictionary *_dictThumbInfo;
}

@property (weak, nonatomic) id<MMMusicFlexEditBarThumbLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithArrTrackItem:(id)a0;
- (void)loadData;
- (void)reloadWithTrackItems:(id)a0 needReloadThumbData:(BOOL)a1;
- (void)loadThumb:(id)a0;
- (void)retriveThumbImageAtTrackIndex:(unsigned int)a0 timeSec:(double)a1 blockOnGetThumbImage:(id /* block */)a2;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
