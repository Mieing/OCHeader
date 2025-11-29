@class NSString;

@interface IESECRelationFansClubInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long fansClubLevel;
@property (nonatomic) long long fansClubIntimacy;
@property (nonatomic) BOOL joinStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
