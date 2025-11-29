@class NSArray, NSString;
@protocol ACCMusicModelProtocol;

@interface ACCPropRecommendMusicReponseModel : NSObject

@property (copy, nonatomic) NSArray *recommendMusicList;
@property (retain, nonatomic) id<ACCMusicModelProtocol> weakBindMusic;
@property (copy, nonatomic) NSString *bubbleTitle;

+ (BOOL)shouldForbidRequestRecommendMusicInfoWithEffectModel:(id)a0;
+ (void)fetchStickerRecommendMusicList:(id)a0 createId:(id)a1 extraParams:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;

@end
