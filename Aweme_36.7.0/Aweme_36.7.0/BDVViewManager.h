@class NSString;
@protocol BDVViewEventProtocol;

@interface BDVViewManager : BDVBaseManager <BDVScrollViewEventProtocol> {
    BOOL _bdv_viewDidVisible;
}

@property (nonatomic) BOOL hasBindToScrollView;
@property (weak, nonatomic) id<BDVViewEventProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
