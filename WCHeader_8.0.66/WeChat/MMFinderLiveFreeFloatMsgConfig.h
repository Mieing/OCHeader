@class NSString;

@interface MMFinderLiveFreeFloatMsgConfig : NSObject

@property (nonatomic) unsigned long long stayTimeLimit;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned long long enableTimestamp;
@property (retain, nonatomic) NSString *guideWording;

+ (id)configFromFreeFloatMsgInfo:(id)a0;

- (void).cxx_destruct;

@end
