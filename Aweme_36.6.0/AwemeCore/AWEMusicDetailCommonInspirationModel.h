@class AWECodeGenCommonEntranceBodyModel;

@interface AWEMusicDetailCommonInspirationModel : AWEMusicDetailInspirationModel

@property (retain, nonatomic) AWECodeGenCommonEntranceBodyModel *commonInspirationInfo;

- (unsigned long long)inspirationType;
- (void)updateDataWithResponseModel:(id)a0;
- (id)shootSameDescription;
- (void).cxx_destruct;
- (id)subTitle;
- (id)title;
- (long long)materialType;
- (BOOL)isDataAvailable;
- (id)coverURL;

@end
