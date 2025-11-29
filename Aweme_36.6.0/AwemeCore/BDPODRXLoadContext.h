@class NSString, BDPTrackEventInfo;
@protocol BDPAppMetaBriefProtocol;

@interface BDPODRXLoadContext : NSObject

@property (retain, nonatomic) id<BDPAppMetaBriefProtocol> meta;
@property (retain, nonatomic) id<BDPAppMetaBriefProtocol> oldMeta;
@property (nonatomic) BOOL usedCacheMeta;
@property (nonatomic) BOOL isLanPkg;
@property (copy, nonatomic) BDPTrackEventInfo *trackInfo;
@property (nonatomic) long long readType;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *startPagePath;
@property (nonatomic) BOOL subPkgDownloadAll;
@property (copy, nonatomic) id /* block */ loadProgressBlk;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ md5InvliadBlk;

- (void).cxx_destruct;

@end
