@class NSString;

@interface IESPhoneInfo : NSObject

@property (nonatomic) long long hour;
@property (retain, nonatomic) NSString *access;
@property (nonatomic) long long signal;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *his_page;
@property (retain, nonatomic) NSString *cur_page;
@property (retain, nonatomic) NSString *cur_tab_pos;

- (void).cxx_destruct;

@end
