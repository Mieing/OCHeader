@class NSString, NSHashTable;
@protocol AWEProfileRedDotNodeModelProtocol;

@interface AWEProfileFavoriteFirstTabRedDotAdapter : NSObject <AWEProfileRedDotAdapterProtocol>

@property (retain, nonatomic) id<AWEProfileRedDotNodeModelProtocol> model;
@property (retain, nonatomic) NSHashTable *showViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindShowView:(id)a0;
- (void)removeShowView:(id)a0;
- (void)addRedDotNode:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithModel:(id)a0;

@end
