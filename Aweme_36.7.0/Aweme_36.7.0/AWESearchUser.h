@class NSString, NSArray, AWESearchHotSpotAladdinModel, AWEAwemeModel, AWEUserAccountCertInfoModel, AWEUserModel, AWEDynamicPatchModel;

@interface AWESearchUser : MTLModel <IGListDiffable, MTLJSONSerializing>

@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;
@property (retain, nonatomic) AWEUserModel *userInfo;
@property (retain, nonatomic) NSArray *position;
@property (retain, nonatomic) NSArray *uniqidPosition;
@property (retain, nonatomic) NSArray *remarkPosition;
@property (retain, nonatomic) NSArray *stickersArray;
@property (retain, nonatomic) NSArray *OSTsArray;
@property (retain, nonatomic) NSArray *videosArray;
@property (copy, nonatomic) NSArray *mixVideoArray;
@property (retain, nonatomic) AWESearchHotSpotAladdinModel *hotSpotModel;
@property (retain, nonatomic) AWEAwemeModel *awemeForAd;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (copy, nonatomic) NSArray *challenges;
@property (nonatomic) BOOL isRedPhoneNumber;
@property (copy, nonatomic) NSString *phoneNumberEncrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInfoJSONTransformer;
+ (id)positionJSONTransformer;
+ (id)uniqidPositionJSONTransformer;
+ (id)dynamicPatchJSONTransformer;
+ (id)hotSpotModelJSONTransformer;
+ (id)instanceWithUser:(id)a0;
+ (id)accountCertInfoJSONTransformer;
+ (id)remarkPositionJSONTransformer;
+ (id)stickersArrayJSONTransformer;
+ (id)OSTsArrayJSONTransformer;
+ (id)videosArrayJSONTransformer;
+ (id)mixVideoArrayJSONTransformer;
+ (id)awemeForAdJSONTransformer;
+ (id)challengesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
