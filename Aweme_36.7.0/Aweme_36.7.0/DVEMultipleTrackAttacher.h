@class NLETimeSpaceNode_OC;
@protocol DVEMultipleTrackAttacherDelegate;

@interface DVEMultipleTrackAttacher : DVEAttacher

@property (nonatomic) unsigned long long trackType;
@property (weak, nonatomic) id<DVEMultipleTrackAttacherDelegate> delegate;
@property (retain, nonatomic) NLETimeSpaceNode_OC *selectedNode;

+ (double)attachThreshold;

- (void)reloadPoints;
- (id)attachablePointsOfTypes:(id)a0 excludeNode:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
