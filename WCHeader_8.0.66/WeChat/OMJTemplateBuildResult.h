@class NSString, OMJMusicInfo, NSArray, OMJID;

@interface OMJTemplateBuildResult : NSObject

@property (readonly, nonatomic) OMJID *resultID;
@property (readonly, nonatomic) NSString *templateID;
@property (readonly, nonatomic) BOOL usingBlankTemplate;
@property (readonly, nonatomic) OMJMusicInfo *seletecedMusicInfo;
@property (readonly, nonatomic) NSArray *templateMusicInfos;
@property (readonly, nonatomic) NSArray *recommendedMusicInfos;

- (id)initWithBackingResult:(const void *)a0;
- (id)description;
- (void).cxx_destruct;

@end
