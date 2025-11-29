@class IESECRelationFansClubInfoModel, NSNumber, NSString;

@interface IESECRelationFansClubInfoResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECRelationFansClubInfoModel *fansClubInfo;
@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
