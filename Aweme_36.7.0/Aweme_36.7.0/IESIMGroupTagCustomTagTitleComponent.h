@interface IESIMGroupTagCustomTagTitleComponent : IESIMContactPickerCellComponentBase {
    void /* unknown type, empty encoding */ titleHeight;
}

+ (id)identifier;

- (void)willDisplayAtIndexPath:(id)a0;
- (double)componentViewHeight;
- (id)initWithCellController:(id)a0 context:(id)a1;
- (void)updateView:(id)a0 cacheService:(id)a1;
- (id)init;
- (id)createView;

@end
