@class NSString;

@interface MQPNormalTrack : NSObject <NSCoding>

@property (nonatomic) double lastTime;
@property (copy, nonatomic) NSString *currView;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *prepTime;
@property (copy, nonatomic) NSString *sendSize;
@property (copy, nonatomic) NSString *recvSize;
@property (copy, nonatomic) NSString *netTime;
@property (copy, nonatomic) NSString *serverTime;
@property (copy, nonatomic) NSString *nextView;
@property (copy, nonatomic) NSString *parseTime;
@property (copy, nonatomic) NSString *bnParseTime;
@property (copy, nonatomic) NSString *bnCreateTime;
@property (copy, nonatomic) NSString *showTime;
@property (copy, nonatomic) NSString *currTime;
@property (copy, nonatomic) NSString *dispatchTime;
@property (copy, nonatomic) NSString *syncHandleTime;
@property (copy, nonatomic) NSString *asyncHandleTime;

+ (id)timeString;

- (id)initTrackWithCurrView:(id)a0 actionType:(id)a1 actionName:(id)a2;
- (id)syncHandleTime;
- (id)asyncHandleTime;
- (void)setSyncHandleTime:(id)a0;
- (void)setAsyncHandleTime:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dispatchTime;
- (void)setDispatchTime:(id)a0;
- (id)trackTime;

@end
