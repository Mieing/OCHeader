@class NSString, UIColor, UIImage;
@protocol IESIMContactPickerSectionSupplementModelContext;

@interface IESIMCollapsibleTipReusableViewModel : NSObject <IESIMContactPickerContentSupplementaryModelProtocol>

@property (copy, nonatomic) NSString *elementKind;
@property (copy, nonatomic) NSString *reusableViewIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerSectionSupplementModelContext> context;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long count;
@property (retain, nonatomic) UIImage *tailImage;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isTrackedShow;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *countText;
@property (nonatomic) BOOL isOnlyTrackFirstShow;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCount:(long long)a0;
- (void)trackShowIfNeed;
- (id)initWithElementKind:(id)a0 reusableViewIdentifier:(id)a1;
- (void)p_trackClick;
- (BOOL)shouldShowContainer;
- (void)p_updateTailImage;
- (id)p_getCountLabelText:(long long)a0;
- (void)p_trackMyOtherGroupEntranceEvent:(id)a0;
- (id)p_foldIcon;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateBackgroundColor:(id)a0;
- (double)viewHeight;
- (void)updateContext:(id)a0;
- (void)didTapView;

@end
