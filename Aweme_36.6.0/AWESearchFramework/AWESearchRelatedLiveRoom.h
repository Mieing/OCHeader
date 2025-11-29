@class AWEURLModel, NSString, NSNumber, AWEUserModel;

@interface AWESearchRelatedLiveRoom : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long userCount;
@property (retain, nonatomic) AWEUserModel *owner;
@property (retain, nonatomic) AWEURLModel *roomCoverURL;
@property (retain, nonatomic) NSNumber *ownerUserID;

+ (id)ownerJSONTransformer;
+ (id)roomCoverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
