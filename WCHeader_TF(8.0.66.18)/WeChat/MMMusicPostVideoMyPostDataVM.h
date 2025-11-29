@class NSData, NSString, NSMutableArray;
@protocol MMMusicPostVideoMyPostDataVMDelegate;

@interface MMMusicPostVideoMyPostDataVM : MMObject <MMMusicDataVM> {
    NSString *finderUsername;
    NSMutableArray *_arrData;
}

@property (weak, nonatomic) id<MMMusicPostVideoMyPostDataVMDelegate> delegate;
@property (nonatomic) unsigned long long maxId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUsername:(id)a0;
- (void)loadFirstPageData;
- (void)loadNextPageData;
- (void)loadData:(BOOL)a0;
- (void)onServerGetDataArr:(id)a0 continueFlag:(BOOL)a1;
- (long long)numberOfItemsInSection;
- (id)dataOfIndex:(long long)a0;
- (unsigned long long)indexOfData:(id)a0;
- (id)getDataById:(id)a0;
- (void)notifyOnDataChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
