@class NSMutableArray, FavResendObject;

@interface CheckFavItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *favIdandObjectList;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) FavResendObject *favResendObject;

+ (void)initialize;

@end
