@protocol AWELiveExpoundCardVC;

@interface AWELiveAudienceInnerRoomModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ enterRoomBlock;
@property (retain, nonatomic) id<AWELiveExpoundCardVC> expoundCardVC;

- (void).cxx_destruct;

@end
