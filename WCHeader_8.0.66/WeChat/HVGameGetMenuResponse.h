@class NSMutableArray, BaseResponse;

@interface HVGameGetMenuResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *menuItemList;

+ (void)initialize;

@end
