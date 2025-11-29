@class NSMutableArray;

@interface MMKindaModalManagerInstance : NSObject

@property (retain, nonatomic) NSMutableArray *modals;

+ (id)shared;

- (id)init;
- (void)dealloc;
- (void)keyboardWillShown:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void).cxx_destruct;

@end
