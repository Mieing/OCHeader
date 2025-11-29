@class NSString, IESECTracker, IESECWinHeaderBFFModel;

@interface IESECWinNavObject : NSObject <IGListDiffable>

@property (retain, nonatomic) IESECWinHeaderBFFModel *BFFModel;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL hasLiving;
@property (retain, nonatomic) IESECTracker *tracker;

- (void).cxx_destruct;

@end
