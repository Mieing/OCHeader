@class NSString, NSArray;

@interface AWEMessageReachSideBarNoticeTempInfoModel : NSObject

@property (copy, nonatomic) NSString *tempId;
@property (nonatomic) long long unmarkCnt;
@property (nonatomic) long long lastNidTime;
@property (nonatomic) long long tempStatus;
@property (copy, nonatomic) NSArray *msgList;

+ (BOOL)validateTempInfoModel:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
