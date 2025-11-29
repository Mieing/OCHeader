@class AWECoCreatorMultiAvatarTag, NSArray, NSString, UILabel, UIView, AWEPlayInteractionBaseElement;

@interface AWECoCreatorTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) UILabel *coCreatorLabel;
@property (retain, nonatomic) UIView *tagContentView;
@property (retain, nonatomic) AWECoCreatorMultiAvatarTag *multiAvatarTag;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)needShowWithContext:(id)a0;
+ (BOOL)mustShowWithContext:(id)a0;
+ (id)attributedStringWithCoCreatorLabel:(id)a0;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (long long)tagWidth;
- (long long)optimizeStyle;
- (long long)tagStyle;
- (void)configMultiAvatarTagWithCoCreatorLabel:(id)a0 model:(id)a1;
- (void)configDefaultTagWithCoCreatorLabel:(id)a0;
- (id)urlModelsForMultiAvatarTagWithModel:(id)a0;
- (void)onCoCreatorLabelClicked:(id)a0;
- (BOOL)isJXStyleOne;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
