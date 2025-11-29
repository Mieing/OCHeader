@class NSArray, NSString, AWEAwemeModel, UILabel, UIView, AWEPlayInteractionBaseElement;

@interface AWEShowLongVideoHighLightsTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) UIView *lvideoHighLightTagView;
@property (retain, nonatomic) UILabel *lvideoHighLightTagLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;
+ (id)getSpaceStringWithSpace:(double)a0;

- (long long)tagWidth;
- (long long)tagLabelWidth;
- (id)attributedStringWithTagLabel:(id)a0;
- (void)onLvideoHighLightTagLabelClicked:(id)a0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
