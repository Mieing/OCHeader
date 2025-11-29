@class NSString;

@interface GetMessageFromWXReq : BaseReq

@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *country;

- (id)init;
- (void).cxx_destruct;

@end
