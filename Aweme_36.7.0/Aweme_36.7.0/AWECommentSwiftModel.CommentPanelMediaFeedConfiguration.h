@class NSArray;

@interface AWECommentSwiftModel.CommentPanelMediaFeedConfiguration : NSObject <AWECommentMediaFeedConfigurationProtocol> {
    void /* function */ componentInfoArray;
    void /* unknown type, empty encoding */ outerConfig;
    void /* unknown type, empty encoding */ interactionTypeProperty;
    void /* function */ commentModelArray;
    void /* function */ commentImageModelArray;
}

@property (nonatomic, copy) NSArray *componentInfoArray;
@property (nonatomic) unsigned long long sceneType;
@property (nonatomic, copy) NSArray *commentModelArray;
@property (nonatomic, copy) NSArray *commentImageModelArray;
@property (nonatomic) long long landingIndex;
@property (nonatomic) long long currentImageIndexInMulti;

- (id)commentMediaInputConfigModel;
- (id)interactionConfig;
- (BOOL)disableCustomTransition;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;

@end
