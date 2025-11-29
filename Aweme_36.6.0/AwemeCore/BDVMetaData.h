@interface BDVMetaData : NSObject

@property (weak, nonatomic) id itemID;
@property (nonatomic) double stayTime;
@property (nonatomic) double visibleViewRate;
@property (nonatomic) double displayTimeStart;
@property (nonatomic) BOOL ignoreCurrentVisibleEvent;

- (void).cxx_destruct;
- (id)init;

@end
