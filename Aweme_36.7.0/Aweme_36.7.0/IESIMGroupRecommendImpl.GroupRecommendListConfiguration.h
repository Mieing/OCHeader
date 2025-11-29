@class UIColor;

@interface IESIMGroupRecommendImpl.GroupRecommendListConfiguration : NSObject <IESIMGroupRecommendListConfigurationProtocol> {
    void /* function */ cellTappedCallback;
    void /* function */ loadMoreCallback;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } listContentInset;
@property (nonatomic) BOOL enableListUpdateAnimation;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionContentInset;
@property (nonatomic, copy) id /* block */ cellTappedCallback;
@property (nonatomic, copy) id /* block */ loadMoreCallback;

- (void).cxx_destruct;
- (id)init;

@end
