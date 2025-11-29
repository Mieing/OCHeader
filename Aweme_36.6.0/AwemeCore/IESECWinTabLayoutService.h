@class NSString, IESECServiceProxy, NSDictionary, IESECWinContext;
@protocol IESECWinDataService;

@interface IESECWinTabLayoutService : NSObject <IESECWinTabLayoutService> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (nonatomic) unsigned long long layout;
@property (copy, nonatomic) NSDictionary *layoutStyles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getLayout;
- (void)switchTabLayout;
- (void)updateTabLayout:(id)a0;
- (unsigned long long)setTabLayout;
- (void)updateSpanSizeWithItemDataModel:(id)a0 sectionColumn:(long long)a1 lynxConfig:(id)a2;
- (BOOL)shouldUpdateCellSpanSizeWithItemType:(unsigned long long)a0 lynxModifiable:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
