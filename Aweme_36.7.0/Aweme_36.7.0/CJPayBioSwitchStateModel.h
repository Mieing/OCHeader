@class NSString;

@interface CJPayBioSwitchStateModel : NSObject

@property (copy, nonatomic) NSString *code;
@property (nonatomic) BOOL isOpen;
@property (copy, nonatomic) NSString *msg;
@property (nonatomic) long long style;
@property (nonatomic) BOOL toasted;

- (id)toJson;
- (void).cxx_destruct;

@end
