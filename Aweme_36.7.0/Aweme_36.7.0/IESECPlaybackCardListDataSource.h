@class IESECLiveRoomContext, NSDictionary, NSArray, NSString, NSMutableArray;

@interface IESECPlaybackCardListDataSource : NSObject

@property (nonatomic) BOOL haveTimeStamp;
@property (weak, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) NSDictionary *addtionalParams;
@property (retain, nonatomic) NSArray *pageTimeStamp;
@property (retain, nonatomic) NSMutableArray *replayCards;
@property (retain, nonatomic) NSMutableArray *pageAlreadyRequested;
@property (retain, nonatomic) NSString *authorID;
@property (retain, nonatomic) NSString *roomID;
@property (nonatomic) long long mode;

- (id)liveContext;
- (void)fetchTimeStampWithCompletion:(id /* block */)a0;
- (void)fetchReplayCardsWithPage:(long long)a0 completion:(id /* block */)a1;
- (void)updateAdditionalParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
