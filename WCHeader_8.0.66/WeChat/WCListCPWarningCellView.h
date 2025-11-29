@class NSString;

@interface WCListCPWarningCellView : WCListBaseCellView <MMCPLabelDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;

- (void)initView;
- (void)onClickEvent;
- (void)onRestoreCPLabel:(id)a0;

@end
