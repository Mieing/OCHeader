@class NSNumber, NSString, IESECURLModel;

@interface IESECRecommendCommonUserModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *uid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (nonatomic) BOOL isLive;
@property (retain, nonatomic) NSString *link;
@property (nonatomic) unsigned long long followStatus;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *secUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
