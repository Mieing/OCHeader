@class IESLiveAudienceModel, NSArray, NSString, NSDictionary, IESLiveImage, NSNumber;

@interface IESLiveAudienceListModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) long long theRichCount;
@property (nonatomic) long long theAudienceCount;
@property (retain, nonatomic) NSArray *audiences;
@property (retain, nonatomic) NSArray *bestAudiences;
@property (readonly, nonatomic) IESLiveAudienceModel *selfInfo;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, copy, nonatomic) NSString *thisRoomWave;
@property (readonly, nonatomic) NSNumber *totalWave;
@property (retain, nonatomic) NSString *currency;
@property (retain, nonatomic) NSArray *privilegeIntros;
@property (retain, nonatomic) IESLiveImage *vipEmptyBackgroundImage;
@property (readonly, nonatomic) NSNumber *isRich;
@property (readonly, copy, nonatomic) NSString *rulesURL;
@property (retain, nonatomic) NSString *userCountStr;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audiencesJSONTransformer;
+ (id)bestAudiencesJSONTransformer;
+ (id)selfInfoJSONTransformer;
+ (id)vipEmptyBackgroundImageJSONTransformer;
+ (id)privilegeIntrosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
