@class NSArray;
@protocol IESLiveRoomService;

@interface IESLiveGiftDataFetchTask : NSObject

@property (retain, nonatomic) NSArray *giftIDList;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) unsigned long long fetchScene;
@property (copy, nonatomic) id /* block */ fetchGiftCompletion;

- (void).cxx_destruct;

@end
