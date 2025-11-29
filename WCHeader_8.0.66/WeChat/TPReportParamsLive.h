@class NSString;

@interface TPReportParamsLive : NSObject <ITPReportParams>

@property (nonatomic) long long ftime;
@property (retain, nonatomic) NSString *sip;
@property (retain, nonatomic) NSString *uip;
@property (retain, nonatomic) NSString *cdnuip;
@property (retain, nonatomic) NSString *iqq;
@property (retain, nonatomic) NSString *qqopen_id;
@property (retain, nonatomic) NSString *wxopen_id;
@property (retain, nonatomic) NSString *playno;
@property (nonatomic) long long seq;
@property (retain, nonatomic) NSString *cdnid;
@property (retain, nonatomic) NSString *protocol;
@property (retain, nonatomic) NSString *protocolVer;
@property (nonatomic) long long prdlength;
@property (nonatomic) long long playad;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *fplayerver;
@property (retain, nonatomic) NSString *dsip;
@property (nonatomic) long long devtype;
@property (nonatomic) long long nettype;
@property (nonatomic) long long freetype;
@property (nonatomic) long long platform;
@property (retain, nonatomic) NSString *device;
@property (retain, nonatomic) NSString *resolution;
@property (retain, nonatomic) NSString *osver;
@property (nonatomic) long long playertype;
@property (retain, nonatomic) NSString *appver;
@property (nonatomic) long long playtype;
@property (nonatomic) long long scenesid;
@property (nonatomic) BOOL use_p2p;
@property (nonatomic) BOOL p2p_play;
@property (retain, nonatomic) NSString *p2pver;
@property (nonatomic) long long livepid;
@property (nonatomic) long long sid;
@property (nonatomic) long long contentid;
@property (nonatomic) long long playtime;
@property (nonatomic) BOOL isuserpay;
@property (retain, nonatomic) NSString *defSwitch;
@property (nonatomic) long long live_type;
@property (retain, nonatomic) NSString *xserverip;
@property (retain, nonatomic) NSString *durl;
@property (nonatomic) BOOL lookback;
@property (nonatomic) long long live_delay;
@property (nonatomic) BOOL live_tag;
@property (retain, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *spanId;
@property (copy, nonatomic) NSString *tuid;
@property (nonatomic) unsigned long long step;
@property (nonatomic) long long cnntime;
@property (nonatomic) long long maxspeed;
@property (nonatomic) long long testspeed;
@property (nonatomic) long long downspeed;
@property (nonatomic) long long recnncount;
@property (nonatomic) unsigned long long loadingtime;
@property (nonatomic) long long blockcount;
@property (nonatomic) unsigned long long blocktime;
@property (nonatomic) long long errorcode;
@property (nonatomic) long long geturltime;
@property (retain, nonatomic) NSString *code;
@property (nonatomic) long long get_stream_data_duration;
@property (nonatomic) long long get_sync_frame_duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (id)init;
- (void)setErrorCode:(id)a0;
- (void).cxx_destruct;

@end
