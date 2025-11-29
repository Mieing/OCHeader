@class NSString;

@interface BDPPluginClipBoard_HG : BDPBridgeInstancePlugin

@property (nonatomic) long long lastGetPasteBoardCount;
@property (copy, nonatomic) NSString *lastSetPasteBoardData;

- (void)setClipboardDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getClipboardDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getClipBoardForegroundWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
