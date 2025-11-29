@class NSArray, NSDictionary, AWEAwemeModel, AWEPrivateInfoResponseModel;

@interface AFDChangePrivacyContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long toPrivacyPermissionType;
@property (readonly, nonatomic) unsigned long long toPrivacyType;
@property (copy, nonatomic) NSArray *friendAndDontShareUserIDs;
@property (copy, nonatomic) NSArray *mateAndDontShareUserIDs;
@property (copy, nonatomic) NSArray *exclusionSecUidList;
@property (nonatomic) unsigned long long partOfVisibleScene;
@property (copy, nonatomic) NSArray *partOfVisibleUserIDs;
@property (copy, nonatomic) NSArray *partOfVisibleGroupIDList;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *updateParams;
@property (nonatomic) BOOL disableToast;
@property (retain, nonatomic) AWEPrivateInfoResponseModel *responseModel;

- (void).cxx_destruct;
- (id)init;

@end
