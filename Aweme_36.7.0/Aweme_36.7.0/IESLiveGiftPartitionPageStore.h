@class HTSEventContext, NSMutableArray, NSArray;
@protocol IESLiveRoomService;

@interface IESLiveGiftPartitionPageStore : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableArray *pageSections;
@property (retain, nonatomic) NSMutableArray *giftModelsByPartitionArray;
@property (copy, nonatomic) NSArray *giftGroup;

- (void).cxx_destruct;

@end
