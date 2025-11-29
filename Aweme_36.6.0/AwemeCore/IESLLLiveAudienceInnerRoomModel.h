@protocol IESLLLiveExpoundCardVC;

@interface IESLLLiveAudienceInnerRoomModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ enterRoomBlock;
@property (retain, nonatomic) id<IESLLLiveExpoundCardVC> expoundCardVC;

- (void).cxx_destruct;

@end
