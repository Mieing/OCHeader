@interface FBSDKViewHierarchy : NSObject

+ (id)getChildren:(id)a0;
+ (id)getParent:(id)a0;
+ (id)getPath:(id)a0;
+ (id)getPath:(id)a0 limit:(int)a1;
+ (id)getAttributesOf:(id)a0 parent:(id)a1;
+ (id)getDetailAttributesOf:(id)a0;
+ (id)getIndexPath:(id)a0;
+ (id)getText:(id)a0;
+ (id)getTextStyle:(id)a0;
+ (id)getHint:(id)a0;
+ (unsigned long long)getClassBitmask:(id)a0;
+ (BOOL)isUserInputView:(id)a0;
+ (BOOL)isRCTButton:(id)a0;
+ (id)getViewReactTag:(id)a0;
+ (BOOL)isView:(id)a0 superViewOfView:(id)a1;
+ (id)getParentViewController:(id)a0;
+ (id)getParentTableView:(id)a0;
+ (id)getParentCollectionView:(id)a0;
+ (long long)getTag:(id)a0;
+ (id)getDimensionOf:(id)a0;

@end
