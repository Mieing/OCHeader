@class NSString, HTSLiveUser;

@interface IESLiveGiftGuestEntityConfig : NSObject

@property (nonatomic) BOOL isSelect;
@property (retain, nonatomic) HTSLiveUser *user;
@property (copy, nonatomic) NSString *statusStr;

- (id)initWithIsSelect:(BOOL)a0 user:(id)a1 statusStr:(id)a2;
- (void).cxx_destruct;

@end
