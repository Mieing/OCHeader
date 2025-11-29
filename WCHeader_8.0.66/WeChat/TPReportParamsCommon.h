@class NSString;

@interface TPReportParamsCommon : NSObject <ITPReportParams>

@property (nonatomic) long long platform;
@property (retain, nonatomic) NSString *flowid;
@property (retain, nonatomic) NSString *playno;
@property (nonatomic) unsigned long long step;
@property (nonatomic) long long seq;
@property (retain, nonatomic) NSString *uin;
@property (retain, nonatomic) NSString *QQopenid;
@property (retain, nonatomic) NSString *WXopenid;
@property (nonatomic) long long logintype;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *uip;
@property (retain, nonatomic) NSString *cdnuip;
@property (retain, nonatomic) NSString *cdnip;
@property (nonatomic) BOOL downloadkit;
@property (nonatomic) BOOL online;
@property (nonatomic) BOOL p2p;
@property (nonatomic) long long sstrength;
@property (nonatomic) long long network;
@property (retain, nonatomic) NSString *protocol;
@property (retain, nonatomic) NSString *protocolVer;
@property (nonatomic) long long speed;
@property (retain, nonatomic) NSString *device;
@property (retain, nonatomic) NSString *resolution;
@property (nonatomic) long long testid;
@property (retain, nonatomic) NSString *osver;
@property (retain, nonatomic) NSString *p2pver;
@property (retain, nonatomic) NSString *appver;
@property (retain, nonatomic) NSString *playerver;
@property (nonatomic) long long playertype;
@property (nonatomic) long long cdnid;
@property (nonatomic) long long scenesid;
@property (nonatomic) long long playtype;
@property (nonatomic) long long dltype;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *definition;
@property (nonatomic) long long fmt;
@property (nonatomic) long long rate;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setErrorCode:(id)a0;
- (void).cxx_destruct;

@end
