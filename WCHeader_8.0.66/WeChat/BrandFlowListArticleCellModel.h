@class NSString;

@interface BrandFlowListArticleCellModel : BrandFlowListBaseCellModel

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int sceneToAppendUrl;
@property (nonatomic) unsigned int subSceneToAppendUrl;
@property (nonatomic) unsigned int bizUin;
@property (nonatomic) unsigned int mid;
@property (nonatomic) unsigned int idx;

+ (id)convertFromReaderWrap:(id)a0;

- (id)getArticleUrl;
- (void).cxx_destruct;

@end
