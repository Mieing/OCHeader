@class NSString, NSObject;
@protocol ACCCTRVisibleCollectionViewDelegate;

@interface ACCCTRCollectionViewVisibleDelegateWrapper : NSObject <BDVListEventProtocol>

@property (weak, nonatomic) NSObject<ACCCTRVisibleCollectionViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithDelegate:(id)a0;

- (void)bdv_cellDidVisible:(id)a0 indexPath:(id)a1 metaData:(id)a2;
- (void).cxx_destruct;

@end
