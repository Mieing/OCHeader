@class NSMutableDictionary, NSArray, NSMutableArray, AWEDetailUnifyCollectionButton;

@interface AWEDetailBottomActionView : UIView

@property (retain, nonatomic) AWEDetailUnifyCollectionButton *collectionButton;
@property (retain, nonatomic) NSMutableDictionary *buttonKeyDict;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSArray *configs;

- (void)resetUIWithConfigs:(id)a0;
- (id)collectButtonWithConfig:(id)a0;
- (unsigned long long)duxButtonStyleFromColorStyle:(unsigned long long)a0;
- (id)buttonWithKey:(id)a0;
- (void)updateUIWithConfig:(id)a0 button:(id)a1;
- (void)updateUIWithConfig:(id)a0;
- (void)updateUIWithConfig:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (id)initWithConfigs:(id)a0;

@end
