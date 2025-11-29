@class NSString;

@interface WCRedEnvTextStateInfo : NSObject

@property (retain, nonatomic) NSString *senderUsername;
@property (retain, nonatomic) NSString *receiverUsername;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) long long amount;
@property (retain, nonatomic) NSString *wishing;
@property (retain, nonatomic) NSString *pagName;
@property (nonatomic) BOOL enableSetState;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *videoThumbUrl;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (retain, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSString *sourceName;

- (void).cxx_destruct;

@end
