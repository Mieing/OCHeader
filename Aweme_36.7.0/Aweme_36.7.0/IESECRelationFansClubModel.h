@class NSString, IESECRelationFansClubBubbleConfigModel;

@interface IESECRelationFansClubModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL openFansClub;
@property (nonatomic) BOOL joinStatus;
@property (nonatomic) long long fansClubLevel;
@property (copy, nonatomic) NSString *fansClubUrl;
@property (retain, nonatomic) IESECRelationFansClubBubbleConfigModel *fansClubBubbleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
