@class AWESearchBottomNormalBarComponentModel, NSArray, AWESearchTextExtractionComponentModel, AWESearchAIBotAbstractComponentModel, AWESearchTextComponentModel, AWESearchUserAvatarComponentModel, AWESearchLikeComponentModel;

@interface AWESearchPlayerInteractorLeftBottomContainerComponentModel : AWESearchComponentBasicModel

@property (retain, nonatomic) NSArray *type;
@property (nonatomic) unsigned long long componentType;
@property (retain, nonatomic) AWESearchLikeComponentModel *likeComponentModel;
@property (retain, nonatomic) AWESearchUserAvatarComponentModel *userAvatarComponentModel;
@property (retain, nonatomic) AWESearchBottomNormalBarComponentModel *normalBarModel;
@property (retain, nonatomic) AWESearchTextComponentModel *textModel;
@property (retain, nonatomic) AWESearchTextExtractionComponentModel *textExtractionModel;
@property (retain, nonatomic) AWESearchAIBotAbstractComponentModel *aiBotAbstractModel;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
