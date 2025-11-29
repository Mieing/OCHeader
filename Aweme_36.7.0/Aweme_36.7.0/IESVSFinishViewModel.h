@class NSString, HTSEventContext, NSDictionary, HTSLiveRoom;

@interface IESVSFinishViewModel : NSObject

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) NSString *currentURL;
@property (retain, nonatomic) id mixroom;
@property (copy, nonatomic) id /* block */ closeVCBlock;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSString *finishUrl;
@property (retain, nonatomic) NSDictionary *businessParams;

- (id)actualOwner;
- (BOOL)isDrawEnabled;
- (id)firstRequestPage;
- (void)fetchRoomInfoWithComplete:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRoom:(id)a0;

@end
