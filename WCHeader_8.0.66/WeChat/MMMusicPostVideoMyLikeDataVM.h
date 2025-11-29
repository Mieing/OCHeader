@class NSData, NSString, NSMutableArray;
@protocol MMMusicPostVideoMyLikeDataVMDelegate;

@interface MMMusicPostVideoMyLikeDataVM : MMObject <MMMusicDataVM> {
    NSMutableArray *_arrData;
}

@property (weak, nonatomic) id<MMMusicPostVideoMyLikeDataVMDelegate> delegate;
@property (retain, nonatomic) NSData *lastBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadFirstPageData;
- (void)loadNextPageData;
- (void)loadData;
- (void)onServerGetDataArr:(id)a0 continueFlag:(BOOL)a1;
- (long long)numberOfItemsInSection;
- (id)dataOfIndex:(long long)a0;
- (unsigned long long)indexOfData:(id)a0;
- (id)getDataById:(id)a0;
- (void)notifyOnDataChanged:(BOOL)a0;
- (void).cxx_destruct;

@end
