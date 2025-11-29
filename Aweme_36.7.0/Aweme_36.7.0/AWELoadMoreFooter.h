@class NSString, NSAttributedString, UILabel;

@interface AWELoadMoreFooter : AWELoadMoreBaseFooter <IESIMRefreshFooterProtocol>

@property (nonatomic) BOOL showNoMoreDataText;
@property (copy, nonatomic) NSString *noMoreDataString;
@property (copy, nonatomic) NSAttributedString *noMoreDataAttributedString;
@property (readonly, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *label;

- (void)updateLabelWithAttributedText:(id)a0;
- (void)forceUpdateUI;
- (id)getInnerLabel;
- (void)updateLabelWithText:(id)a0;
- (void)updateLabelWithTextColor:(id)a0;
- (void)p_setupLabel;
- (void).cxx_destruct;

@end
