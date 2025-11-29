@class SpeakTextReporter, NSString, NSArray, NSMutableArray, SpeakTextLoadingRequest;
@protocol SpeakTextResourceLoaderDelegate;

@interface SpeakTextResourceLoader : NSObject <SpeakTextLoadingRequestDelegate> {
    BOOL m_ignoreCache;
}

@property (retain, nonatomic) NSString *originText;
@property (retain, nonatomic) NSMutableArray *currentPieces;
@property (retain, nonatomic) NSArray *extInfos;
@property (retain, nonatomic) SpeakTextLoadingRequest *loadingRequest;
@property (nonatomic) unsigned int requestedIndex;
@property (weak, nonatomic) id<SpeakTextResourceLoaderDelegate> delegate;
@property (retain, nonatomic) SpeakTextReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0;
- (id)getPieceAtIndex:(unsigned int)a0;
- (void)startLoadingRequestIfNeed;
- (void)onLoadingRequest:(id)a0 receiveData:(id)a1 voiceFormat:(unsigned int)a2 reachEnd:(BOOL)a3 extInfos:(id)a4;
- (void)onLoadingRequestFail:(id)a0;
- (id)getPBFilePath:(id)a0;
- (void)loadPiecesFromLocal;
- (void)savePiecesToLocal;
- (void)loadExtInfosFromLocal;
- (void)saveExtInfosToLocal;
- (void).cxx_destruct;

@end
