@class NSString;
@protocol WCNetworkMediaInfoDelegate;

@interface WCNetworkMediaInfo : MMObject <PBMessageObserverDelegate> {
    WCNetworkMediaInfo *weakSelf;
}

@property (retain, nonatomic) NSString *vid;
@property (nonatomic) int source;
@property (weak, nonatomic) id<WCNetworkMediaInfoDelegate> delegate;

- (id)init;
- (void)setH5URL:(id)a0;
- (void)startGetVideoInfo;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)getInfoFromTXVideo:(id)a0;
- (void)onError:(int)a0;
- (void).cxx_destruct;

@end
