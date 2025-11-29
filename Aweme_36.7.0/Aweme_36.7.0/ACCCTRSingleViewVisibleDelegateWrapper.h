@class NSString, NSObject;
@protocol ACCCTRVisibleSingleViewDelegate;

@interface ACCCTRSingleViewVisibleDelegateWrapper : NSObject <BDVViewEventProtocol>

@property (weak, nonatomic) NSObject<ACCCTRVisibleSingleViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithDelegate:(id)a0;

- (void)bdv_viewDidVisible:(id)a0 metaData:(id)a1;
- (void).cxx_destruct;

@end
