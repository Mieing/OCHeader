@class NSArray;

@interface AWECommentSwiftModel.CommentManagerMediaFeedConfiguration : NSObject <AWECommentMediaFeedConfigurationProtocol> {
    void /* function */ commentModelArray;
    void /* function */ commentImageModelArray;
    void /* function */ componentInfoArray;
}

@property (nonatomic) unsigned long long sceneType;
@property (nonatomic, copy) NSArray *commentModelArray;
@property (nonatomic, copy) NSArray *commentImageModelArray;
@property (nonatomic) long long landingIndex;
@property (nonatomic) long long currentImageIndexInMulti;
@property (nonatomic, copy) NSArray *componentInfoArray;

- (id)interactionConfig;
- (BOOL)disableCustomTransition;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)interactionType;

@end
