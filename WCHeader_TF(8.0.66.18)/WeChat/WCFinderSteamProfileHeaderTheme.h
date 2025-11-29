@class NSMapTable;

@interface WCFinderSteamProfileHeaderTheme : NSObject

@property (retain, nonatomic) NSMapTable *items;
@property (nonatomic) BOOL hasCover;

- (void)cleanUp:(id)a0 key:(id)a1;
- (void)config:(id)a0 key:(id)a1 updateBlock:(id /* block */)a2;
- (void)config:(id)a0 setupSeletor:(SEL)a1 normal:(id)a2 coverObj:(id)a3;
- (void)setBackgroundColor:(id)a0 forView:(id)a1;
- (void)setTextColor:(id)a0 forLabel:(id)a1;
- (void)setTitleColor:(id)a0 forButton:(id)a1;
- (void)setImage:(id /* block */)a0 withColor:(id)a1 forImageView:(id)a2;
- (void)setImage:(id /* block */)a0 withColor:(id)a1 forButton:(id)a2;
- (void).cxx_destruct;

@end
