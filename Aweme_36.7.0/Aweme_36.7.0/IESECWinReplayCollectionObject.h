@class NSString, IESECWinReplayCollectionCardViewModel;

@interface IESECWinReplayCollectionObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) IESECWinReplayCollectionCardViewModel *replayCollection;
@property (nonatomic) long long itemIndex;
@property (nonatomic) BOOL isContinuePlay;
@property (nonatomic) double currentTime;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) unsigned long long tabLayoutType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)playItem;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;

@end
