@interface IESIMAICloneModelUtility : NSObject

+ (id)secondaryButtonWithTitle:(id)a0 action:(id /* block */)a1;
+ (id)primaryButtonWithTitle:(id)a0 action:(id /* block */)a1;
+ (id)shareButtonModelWithViewModel:(id)a0 sheet:(id)a1;
+ (id)removeButtonModelWithViewModel:(id)a0 sheet:(id)a1 didRemoveBlock:(id /* block */)a2;
+ (id)bookButtonModelWithViewModel:(id)a0 sheet:(id)a1;

@end
