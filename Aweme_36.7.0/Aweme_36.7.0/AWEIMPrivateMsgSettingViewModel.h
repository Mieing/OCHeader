@class NSString;

@interface AWEIMPrivateMsgSettingViewModel : NSObject

@property (nonatomic) long long actionType;
@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL disable;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 title:(id)a1;
- (id)requestParams;

@end
