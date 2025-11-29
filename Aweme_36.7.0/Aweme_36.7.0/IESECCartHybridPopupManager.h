@class NSMutableDictionary;

@interface IESECCartHybridPopupManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *storedPopups;

- (id)getViewByCode:(id)a0;
- (id)openHybridPopupViewWithPopupConfig:(id)a0 onView:(id)a1 closeCompletion:(id /* block */)a2;
- (void)closeHybridPopupViewWithPopupCode:(id)a0;
- (void).cxx_destruct;

@end
