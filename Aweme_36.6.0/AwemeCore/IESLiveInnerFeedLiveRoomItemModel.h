@protocol IESLivePlayerProtocol;

@interface IESLiveInnerFeedLiveRoomItemModel : IESLiveInnerFeedBaseItemModel

@property (retain, nonatomic) id<IESLivePlayerProtocol> player;

- (void)setIsDefaultItem:(BOOL)a0;
- (void).cxx_destruct;
- (id)feedType;
- (Class)cellClass;
- (Class)sectionClass;

@end
