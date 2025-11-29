@class AWEAwemeModel, NSMutableArray, DUXBasicSheet;

@interface AWEShareOutsideSheetPanel : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWEAwemeModel *currentModel;

+ (id)shareInstance;

- (void)showWithShareItems:(id)a0 withModel:(id)a1;
- (void)dismissWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
