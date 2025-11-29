@class NSString, UIView;
@protocol AWERelatedRecommendTopElementDelegate, AWERelatedRecommendTopElementDataModel;

@interface AWERelatedRecommendTopBaseElement : NSObject <AWERelatedRecommendTopElement>

@property (class, readonly, nonatomic) long long type;

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *skeletonView;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) id<AWERelatedRecommendTopElementDataModel> dataModel;
@property (readonly, nonatomic) double bottomSpacing;
@property (nonatomic) double customBottomSpacing;
@property (weak, nonatomic) id<AWERelatedRecommendTopElementDelegate> delegate;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithContext:(id)a0 container:(id)a1 currentModel:(id)a2;

- (id)horizontalGestureRecognizers;
- (void)updateWithNewState:(long long)a0;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)initWithDataModel:(id)a0;
- (void)updateUI;

@end
