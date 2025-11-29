@class AWEAwemeModel, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERelatedRecommendImpl.RelatedRecommendTopMentionedElementDataModel : NSObject <AWERelatedRecommendTopElementDataModel> {
    void /* unknown type, empty encoding */ videoDeconstructGuessWordModel;
}

@property (nonatomic, readonly) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (nonatomic, weak) void /* function */ container;
@property (nonatomic, readonly) AWEAwemeModel *currentModel;

- (void).cxx_destruct;
- (id)init;

@end
