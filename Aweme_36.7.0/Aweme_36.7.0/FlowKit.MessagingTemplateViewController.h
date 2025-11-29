@interface FlowKit.MessagingTemplateViewController : FlowCommon.FlowBaseViewController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ selectedAction;
    void /* unknown type, empty encoding */ language;
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ isRequesting;
    void /* unknown type, empty encoding */ isSubScribed;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ conversationId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadMoreFooter;
    void /* unknown type, empty encoding */ indicator;
    void /* unknown type, empty encoding */ retryView;
    void /* unknown type, empty encoding */ tracker;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)loadMoreWithFooterOperate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
