@class NSString;

@interface WCAdUxInfo : NSObject

@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *gdtAId;
@property (retain, nonatomic) NSString *adSrcTrigger;
@property (retain, nonatomic) NSString *ts;
@property (retain, nonatomic) NSString *circleId;
@property (retain, nonatomic) NSString *contractFlag;
@property (retain, nonatomic) NSString *slotId;
@property (retain, nonatomic) NSString *empty1;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *siteSet;
@property (retain, nonatomic) NSString *adSource;
@property (retain, nonatomic) NSString *wuid;

+ (id)parseFromUxInfo:(id)a0;

- (void).cxx_destruct;

@end
