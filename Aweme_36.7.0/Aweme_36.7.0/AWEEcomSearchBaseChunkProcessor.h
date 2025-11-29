@class NSArray, NSString, NSObject;
@protocol AWEEcomSearchDataStoreProtocol;

@interface AWEEcomSearchBaseChunkProcessor : NSObject <AWEEcomSearchChunkProcessorProtocol>

@property (retain, nonatomic) NSArray *supportedChunkTypes;
@property (copy, nonatomic) NSString *processorName;
@property (nonatomic) unsigned long long searchType;
@property (weak, nonatomic) NSObject<AWEEcomSearchDataStoreProtocol> *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processChunk:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)initWithName:(id)a0 supportedTypes:(id)a1;
- (Class)chunkParseAPIUpgradeAdapter;
- (BOOL)canProcessChunk:(unsigned long long)a0;
- (void).cxx_destruct;

@end
