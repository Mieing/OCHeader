@class NSArray, NSString;

@interface YataBodySectionViewModel : NSObject <YataSectionViewModel>

@property (nonatomic) long long viewHolderArrayState;
@property (retain, nonatomic) NSArray *finalStateViewHolderArray;
@property (retain, nonatomic) NSArray *animationIntermediateViewHolderArray;
@property (retain, nonatomic) NSArray *animationChangingViewHolderArray;
@property (retain, nonatomic) Class sectionClass;
@property (readonly, nonatomic) NSArray *viewHolderArray;
@property (readonly, nonatomic) BOOL hasAppearingOrDisappearingNodeAnimations;
@property (readonly, nonatomic) BOOL hasChangingNodeAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionModelWithClass:(Class)a0;
+ (Class)sectionClass;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)changeViewHolderArrayState:(long long)a0;
- (void)updateWithViewHolderDict:(id)a0 seqKeyArray:(id)a1 animationIntermediateSeqKeyArray:(id)a2 animationChangingSeqKeyArray:(id)a3;
- (void).cxx_destruct;

@end
