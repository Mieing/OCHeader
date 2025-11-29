@interface ACCStickerBubbleConfig : NSObject

@property (nonatomic) long long actionType;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
