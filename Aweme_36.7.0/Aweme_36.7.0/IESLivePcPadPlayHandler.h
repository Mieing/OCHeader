@class HTSEventContext;
@protocol IESLiveRoomService, IESLivePadCastService;

@interface IESLivePcPadPlayHandler : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLivePadCastService> padCast;
@property (nonatomic) BOOL searchPad;
@property (nonatomic) BOOL searchPc;

+ (id)pcFirstHelpUrl;
+ (id)padFirstHelpUrl;
+ (id)pcSecondHelpUrl;
+ (id)padSecondHelpUrl;
+ (id)deviceIcon:(id)a0 theme:(unsigned long long)a1;
+ (id)pcGuideUrl;
+ (double)scanTimeOut;

- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (id)padPushSchema:(id)a0;
- (void)startFetchPadListWithUpdateBlock:(id /* block */)a0;
- (void)startPushToPadDevice:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)startLoginToPadDevice:(id)a0 extraInfo:(id)a1 callback:(id /* block */)a2;
- (void)beginDiscoverDevice;
- (void)stopDiscoverDevice;
- (BOOL)hasPadFound;
- (void)trackWithEvent:(id)a0 params:(id)a1 addPrefix:(BOOL)a2;
- (void)filterWithType:(long long)a0 callback:(id /* block */)a1;
- (void)startPushToDevice:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)fetchPcDeviceListCallback:(id /* block */)a0;
- (void)fetchPcPadDeviceListAndPushWithParams:(id)a0 callback:(id /* block */)a1;
- (void)startPushToPcDevice:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (id)p_createPcDeviceWithData:(id)a0;
- (void).cxx_destruct;
- (void)clearData;

@end
