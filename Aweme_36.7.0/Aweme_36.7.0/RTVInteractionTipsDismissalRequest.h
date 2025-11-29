@class NSString;

@interface RTVInteractionTipsDismissalRequest : NSObject

@property (readonly, copy, nonatomic) NSString *showingIdentifier;
@property (readonly, nonatomic) BOOL animated;

- (id)initWithShowingIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)updateAnimated:(BOOL)a0;

@end
