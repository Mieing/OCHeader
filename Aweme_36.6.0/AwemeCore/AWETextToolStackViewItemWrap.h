@class NSString, UIImageView, AWETextStackViewItemConfig, ACCAnimatedButton;

@interface AWETextToolStackViewItemWrap : NSObject

@property (copy, nonatomic) NSString *itemIdentity;
@property (retain, nonatomic) ACCAnimatedButton *itemView;
@property (retain, nonatomic) UIImageView *starView;
@property (nonatomic) BOOL hasStarShine;
@property (copy, nonatomic) id /* block */ configProvider;
@property (copy, nonatomic) id /* block */ clickHandler;
@property (retain, nonatomic) AWETextStackViewItemConfig *itemConfig;
@property (nonatomic) long long index;

- (void).cxx_destruct;

@end
