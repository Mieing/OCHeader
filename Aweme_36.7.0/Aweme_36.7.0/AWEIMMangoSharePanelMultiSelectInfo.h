@class NSString, NSArray;

@interface AWEIMMangoSharePanelMultiSelectInfo : NSObject

@property (readonly, copy, nonatomic) NSString *btnTitle;
@property (readonly, copy, nonatomic) NSString *openSchema;
@property (nonatomic) BOOL keepPanel;
@property (readonly, copy, nonatomic) NSString *customConfirmToast;
@property (readonly, copy, nonatomic) id /* block */ multiSelectCompletion;
@property (copy, nonatomic) NSArray *notSelectableUserArray;
@property (copy, nonatomic) NSArray *defaultSelectUserList;

- (id)initWithBtnTitle:(id)a0 openSchema:(id)a1 customConfirmToast:(id)a2 multiSelectCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
