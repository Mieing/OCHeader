@class NSString;

@interface MMLbsAdvertismentInfo : NSObject

@property (retain, nonatomic) NSString *adId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) BOOL canBeClose;
@property (nonatomic) long long jumpType;
@property (retain, nonatomic) NSString *jumpTarget;
@property (nonatomic) long long position;
@property (nonatomic) long long showTimes;
@property (nonatomic) long long closeTimes;

- (id)initWithXML:(id)a0;
- (void)updateCloseState;
- (void).cxx_destruct;

@end
