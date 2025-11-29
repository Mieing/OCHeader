@class NSString, DVEAnimatedButton, DVETextStackViewItemConfig;

@interface DVETextToolStackViewItemWrap : NSObject

@property (copy, nonatomic) NSString *itemIdentity;
@property (retain, nonatomic) DVEAnimatedButton *itemView;
@property (copy, nonatomic) id /* block */ configProvider;
@property (copy, nonatomic) id /* block */ clickHandler;
@property (retain, nonatomic) DVETextStackViewItemConfig *itemConfig;
@property (nonatomic) long long index;

- (void).cxx_destruct;

@end
