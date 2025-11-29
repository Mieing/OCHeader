@class NSString, NSArray;

@interface NPRecommendAIMomentModel : MTLModel

@property (copy, nonatomic) NSString *identity;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSArray *materialIds;
@property (nonatomic) long long templateId;
@property (nonatomic) long long momentSource;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isUpdate;
@property (copy, nonatomic) NSString *coverMaterialId;
@property (copy, nonatomic) NSArray *coverReframes;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray *uids;
@property (nonatomic) unsigned long long coverUid;

- (void).cxx_destruct;
- (id)description;

@end
