@class AWEMusicDetailInspirationTemplateBodyModel, NSString, AWEMusicDetailProfileTemplateModel, AWEMergedMVTemplateModel, AWEAweMVTemplateModel, NSNumber;

@interface AWEMusicDetailTemplateInspirationModel : AWEMusicDetailInspirationModel

@property (retain, nonatomic) AWEMusicDetailProfileTemplateModel *lvTemplate;
@property (retain, nonatomic) AWEMergedMVTemplateModel *awemeTemplate;
@property (retain, nonatomic) AWEMusicDetailInspirationTemplateBodyModel *templateBodyModel;
@property (retain, nonatomic) AWEAweMVTemplateModel *detailModel;
@property (readonly, nonatomic) NSString *tagName;
@property (readonly, nonatomic) BOOL collectionTab;
@property (readonly, nonatomic) BOOL coverType;
@property (readonly, nonatomic) long long videoMinLimit;
@property (readonly, nonatomic) NSNumber *templateStatusCode;

- (unsigned long long)inspirationType;
- (void)updateDataWithResponseModel:(id)a0;
- (id)shootSameDescription;
- (id)inspirationID;
- (BOOL)isJianYingTemplate;
- (BOOL)isAwemeTemplate;
- (void)setupDataWith:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (long long)materialType;
- (id)userCount;
- (BOOL)isDataAvailable;
- (id)coverURL;

@end
