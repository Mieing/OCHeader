@class NSString;

@interface IESECWinClassificationRecommendObject : NSObject <IGListDiffable>

@property (copy, nonatomic) NSString *hintBarText;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;

@end
