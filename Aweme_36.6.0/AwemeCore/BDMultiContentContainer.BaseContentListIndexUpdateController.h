@interface BDMultiContentContainer.BaseContentListIndexUpdateController : BDMultiContentContainer.BaseContentListController <BDMultiContentContainer.BaseContentListIndexUpdateControllerProtocol> {
    void /* unknown type, empty encoding */ lastUpdatedProgress;
    void /* unknown type, empty encoding */ lastSectionIndex;
    void /* unknown type, empty encoding */ isContentOffsetChanged;
}

@property (nonatomic) BOOL needPlayWhenIndexUpdate;

- (id)init;
- (void)viewDidLoad;

@end
