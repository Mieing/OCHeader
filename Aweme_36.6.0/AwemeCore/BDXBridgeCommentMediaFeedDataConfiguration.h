@class NSArray, AWECommentMediaFeedInteractionConfig, NSString;

@interface BDXBridgeCommentMediaFeedDataConfiguration : NSObject <AWECommentMediaFeedConfigurationProtocol>

@property (nonatomic) unsigned long long sceneType;
@property (copy, nonatomic) NSArray *commentModelArray;
@property (copy, nonatomic) NSArray *commentImageModelArray;
@property (copy, nonatomic) NSArray *componentInfoArray;
@property (nonatomic) long long landingIndex;
@property (nonatomic) long long currentImageIndexInMulti;
@property (retain, nonatomic) AWECommentMediaFeedInteractionConfig *customInteractionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
