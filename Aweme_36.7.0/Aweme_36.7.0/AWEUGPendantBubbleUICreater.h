@interface AWEUGPendantBubbleUICreater : NSObject

+ (id)createPendantBubbleViewWithUIInfo:(id)a0 contentView:(id)a1 cotainerView:(id)a2 isRightSide:(BOOL)a3 isEdged:(BOOL)a4 completion:(id /* block */)a5;
+ (void)removePendantBubbleView:(id)a0;
+ (id)createNewPendantBubbleViewWithUIInfo:(id)a0 cotainerView:(id)a1 contentView:(id)a2 isRightSide:(BOOL)a3 completion:(id /* block */)a4;

@end
