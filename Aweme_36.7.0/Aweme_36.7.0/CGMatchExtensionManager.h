@class NSMutableSet;
@protocol CGItem;

@interface CGMatchExtensionManager : NSObject

@property (weak, nonatomic) id<CGItem> item;
@property (retain, nonatomic) NSMutableSet *objects;
@property (nonatomic) BOOL isMatch;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1 room:(id)a2 dataChannel:(id)a3;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1 room:(id)a2 dataChannel:(id)a3 isMatch:(BOOL)a4;
- (void).cxx_destruct;

@end
