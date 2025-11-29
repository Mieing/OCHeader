@class NSArray, NSString;

@interface CJPayIAPFailPopupConfigModel : NSObject

@property (copy, nonatomic) NSArray *sk1Network;
@property (copy, nonatomic) NSArray *sk2Network;
@property (copy, nonatomic) NSArray *sk1Others;
@property (copy, nonatomic) NSArray *sk2Others;
@property (copy, nonatomic) NSString *linkChatUrl;
@property (copy, nonatomic) NSString *contentNetwork;
@property (copy, nonatomic) NSString *contentOthers;
@property (copy, nonatomic) NSString *titleNetwork;
@property (copy, nonatomic) NSString *titleOthers;
@property (nonatomic) double startTime;
@property (nonatomic) int merchantFrequency;
@property (nonatomic) int orderFrequency;

- (void).cxx_destruct;

@end
