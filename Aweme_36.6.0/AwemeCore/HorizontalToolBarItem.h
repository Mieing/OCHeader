@class NSString, HorizontalToolBarItemStyle;

@interface HorizontalToolBarItem : NSObject {
    void /* function */ trackFunctionName;
    void /* function */ needShowCallback;
    void /* function */ actionCallback;
    void /* function */ disabledClickCallback;
}

@property (nonatomic) long long type;
@property (nonatomic) void *itemId;
@property (nonatomic, copy) NSString *trackFunctionName;
@property (nonatomic, retain) HorizontalToolBarItemStyle *style;
@property (nonatomic) BOOL shouldDismissExpandPanelOnTap;
@property (nonatomic) BOOL show;
@property (nonatomic, copy) id /* block */ needShowCallback;
@property (nonatomic, copy) id /* block */ actionCallback;
@property (nonatomic, copy) id /* block */ disabledClickCallback;

- (id)initWithType:(long long)a0 itemId:(void *)a1 trackFunctionName:(id)a2 style:(id)a3 shouldDismissExpandPanelOnTap:(BOOL)a4 needShowCallback:(id /* block */)a5 actionCallback:(id /* block */)a6 disabledClickCallback:(id /* block */)a7;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)init;

@end
