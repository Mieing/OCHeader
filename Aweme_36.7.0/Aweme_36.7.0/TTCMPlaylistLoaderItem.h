@class NSString, NSArray;

@interface TTCMPlaylistLoaderItem : NSObject {
    void *mLoaderCore;
}

@property (copy, nonatomic) NSString *playlistFileKey;
@property (copy, nonatomic) NSString *playlistRawKey;
@property (copy, nonatomic) NSArray *urlInfos;
@property (nonatomic) BOOL didParseMasterPlaylist;
@property (copy, nonatomic) NSString *mCurrentUrl;

- (unsigned long long)getPlaylistType;
- (void)releaseSource;
- (id)parsePlaylist;
- (id)getSubUrls;
- (void)writeHlsNodeInfo:(id)a0;
- (void)writeTsNodeInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (int)preload;
- (void)cancel;
- (long long)expireTime;
- (id)initWithUrl:(id)a0;

@end
