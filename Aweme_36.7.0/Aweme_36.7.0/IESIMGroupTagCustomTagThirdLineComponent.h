@interface IESIMGroupTagCustomTagThirdLineComponent : IESIMContactPickerCellComponentBase {
    void /* unknown type, empty encoding */ iconHeight;
    void /* unknown type, empty encoding */ viewHeight;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ descriptionView;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (id)initWithCellController:(id)a0 context:(id)a1;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateIcon;
- (id)createView;

@end
