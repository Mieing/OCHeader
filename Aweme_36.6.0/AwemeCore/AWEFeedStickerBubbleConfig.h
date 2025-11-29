@class AWEInteractionExtraModel;

@interface AWEFeedStickerBubbleConfig : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) AWEInteractionExtraModel *extraModel;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
