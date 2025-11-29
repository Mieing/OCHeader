@interface BrandCustomSharePanelClientAction : BrandCustomSharePanelAction

@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL refreshBeforeShow;
@property (nonatomic) BOOL keepPanelOpen;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ exposeBlock;

- (void).cxx_destruct;

@end
