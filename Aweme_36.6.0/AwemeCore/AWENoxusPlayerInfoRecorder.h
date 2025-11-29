@class NSString, NSMutableDictionary, NSDate;

@interface AWENoxusPlayerInfoRecorder : NSObject <AWENoxusPlayerInfoRecorder>

@property (retain, nonatomic) NSMutableDictionary *timeDic;
@property (retain, nonatomic) NSMutableDictionary *episodeDic;
@property (nonatomic) long long pixelType;
@property (retain, nonatomic) NSDate *playerTipDate;
@property (nonatomic) long long speedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)getPlayTime:(id)a0;
- (void)cacheTimeDict:(id)a0 epiDict:(id)a1;
- (void)recordModel:(id)a0 playTime:(double)a1;
- (id)getLatestEpisode:(id)a0;
- (id)getLatestEpisodeAlbumID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
