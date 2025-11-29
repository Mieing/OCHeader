@class NSString;

@interface AWENoticeSwiftImpl.InteractionNoticeListEmptySectionViewModel : AWEBaseListSectionViewModel {
    void /* function */ titleText;
    void /* function */ detailText;
    void /* function */ clickCreateGroupButton;
}

@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) id /* block */ clickCreateGroupButton;

- (void).cxx_destruct;
- (id)init;

@end
