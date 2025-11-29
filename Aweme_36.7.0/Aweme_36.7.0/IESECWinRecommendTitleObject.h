@class NSString, NSDictionary, IESECTracker;

@interface IESECWinRecommendTitleObject : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *recommendText;
@property (retain, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSString *showTrack;
@property (copy, nonatomic) NSDictionary *showParams;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;

@end
