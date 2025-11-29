@class AWEDetailTrendDescriptionCell, NSString;

@interface AWEDetailTrendDescriptionConfigurationImpl : NSObject <AWEDetailTrendDescriptionConfiguration>

@property (weak, nonatomic) AWEDetailTrendDescriptionCell *trendDescriptionCell;
@property (copy, nonatomic) id /* block */ expandAction;
@property (nonatomic) BOOL isExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellSizeWithDescriptionModel:(id)a0;
- (void)configWithDescriptionModel:(id)a0 cell:(id)a1;
- (void).cxx_destruct;

@end
