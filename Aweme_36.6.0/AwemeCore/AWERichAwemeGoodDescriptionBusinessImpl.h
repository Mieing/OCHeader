@class AWERichAwemeGoodDescriptionView, NSString, AWEAwemeModel;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERichAwemeGoodDescriptionBusinessImpl : NSObject <AWERichAwemeDescriptionElementBusinessProtocol>

@property (retain, nonatomic) AWERichAwemeGoodDescriptionView *descriptionView;
@property (weak, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionContextProtocol> playInteractionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowElementWithContext:(id)a0;

- (void)hideExtraDescription;
- (BOOL)shouldShowDescriptionWithModel:(id)a0;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)elementWillDisplayWithModel:(id)a0;
- (id)getExtraDescriptionAttributedStringWithString:(id)a0;
- (void)openGoodDetailPageWithModel:(id)a0 clickAreaString:(id)a1;
- (id)getTitleAttributedStringWithString:(id)a0;
- (id)getDescriptionAttributedStringWithString:(id)a0 extraDescriptionAttributedString:(id)a1;
- (id)getEllipsisString;
- (void).cxx_destruct;

@end
