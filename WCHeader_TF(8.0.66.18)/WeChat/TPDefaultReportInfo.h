@class NSString, NSMutableDictionary;

@interface TPDefaultReportInfo : NSObject

@property (nonatomic) BOOL online;
@property (nonatomic) BOOL enableP2p;
@property (nonatomic) long long testId;
@property (nonatomic) long long cdnId;
@property (nonatomic) long long dlType;
@property (nonatomic) long long loginType;
@property (nonatomic) long long mediaFormat;
@property (nonatomic) long long mediaRate;
@property (nonatomic) long long cdnUrlIndex;
@property (nonatomic) long long platform;
@property (nonatomic) double mediaDuration;
@property (retain, nonatomic) NSString *uin;
@property (retain, nonatomic) NSString *qqOpenId;
@property (retain, nonatomic) NSString *wxOpenId;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *uip;
@property (retain, nonatomic) NSString *cdnUip;
@property (retain, nonatomic) NSString *cdnIp;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *mediaResolution;
@property (nonatomic) long long subtitleCdnType;
@property (nonatomic) long long subtitleUrlIndex;
@property (nonatomic) long long freeType;
@property (nonatomic) long long scenesId;
@property (retain, nonatomic) NSMutableDictionary *extraReportInfo;

- (long long)playType;
- (void).cxx_destruct;

@end
