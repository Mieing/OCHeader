@class NSString;

@interface AWEKaraokeDataHelper : NSObject <ACCKaraokeDataHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectIdForDataType:(long long)a0;
+ (id)effectForEffectId:(id)a0;
+ (id)coverImageForAsset:(id)a0;
+ (void)fetchRelatedInfos:(id)a0 completion:(id /* block */)a1;
+ (void)downloadEffectWithId:(id)a0 completion:(id /* block */)a1;
+ (BOOL)karaokeLyricModelValid:(id)a0;
+ (id)generateAudioMVDataWithVideo:(id)a0 repository:(id)a1 draftFolder:(id)a2 videoData:(id)a3 completion:(id /* block */)a4;
+ (id)generateAudioMVDataWithImages:(id)a0 repository:(id)a1 draftFolder:(id)a2 videoData:(id)a3 completion:(id /* block */)a4;
+ (void)generateDefaultBGImage:(id)a0 completion:(id /* block */)a1;
+ (id)fetchVideoFileInFolder:(id)a0;
+ (id)fetchDSPFileInFolder:(id)a0;


@end
