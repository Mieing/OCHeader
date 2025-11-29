@class NSArray, NSString;

@interface FlowMarkdownX.FlowMdTableBlockSource : FlowMarkdownX.FlowMdBlockSource {
    void /* function */ dataSource;
    void /* unknown type, empty encoding */ tableColumn;
    void /* unknown type, empty encoding */ row;
    void /* unknown type, empty encoding */ layoutInfo;
}

@property (nonatomic, copy) NSArray *dataSource;
@property (nonatomic, readonly) NSString *renderString;
@property (nonatomic) BOOL hasTitleRow;
@property (nonatomic, readonly) NSString *originTableString;

- (void)enterTableRow;
- (void)leaveTableRow;
- (long long)getColumnAlignmentBeforeAppendTableCell;
- (void)appendTableCell:(id)a0;
- (void)totalReplaceDataSource:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
