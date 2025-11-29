@class NSString, NSMutableArray;

@interface UserIdAuthorizeSmsPageInfo : MMObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *phoneList;
@property (copy, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *categoryId;
@property (copy, nonatomic) NSString *payToken;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *mobile;

- (void).cxx_destruct;

@end
