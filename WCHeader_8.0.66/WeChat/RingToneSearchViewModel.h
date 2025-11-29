@class NSString, NSMutableSet, NSMutableArray, VideoRingNetProvider;

@interface RingToneSearchViewModel : NSObject <RingTonePlayerExt> {
    BOOL _continueFlag;
}

@property (retain, nonatomic) VideoRingNetProvider *provider;
@property (nonatomic) unsigned int dataOffset;
@property (copy, nonatomic) NSString *curQuery;
@property (copy, nonatomic) NSMutableSet *feedIDs;
@property (retain, nonatomic) NSMutableArray *rings;
@property (nonatomic) unsigned long long searchRequestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)searchRing:(id)a0 isFirstPage:(BOOL)a1;
- (void)clearData;
- (id)searchMusicRing:(id)a0;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
