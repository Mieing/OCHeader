@class NSNumber, NSString, IESLLifeURLModel;

@interface IESLLSearchHotelRoomInfoModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSNumber *hotelId;
@property (copy, nonatomic) NSNumber *typeId;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESLLifeURLModel *coverUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
