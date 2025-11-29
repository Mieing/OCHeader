@class NSString, AWEDCFeedPageContext;

@interface AWEDCFeedDataCommonLynxFilter : NSObject <AWEDCFeedDataProcessorProtocol>

@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncProcessDataArrayWithRequestType:(unsigned long long)a0 modelArray:(id)a1 args:(id)a2 completion:(id /* block */)a3;
- (BOOL)isSpecialCard:(id)a0;
- (id)classNameWithReferString;
- (void).cxx_destruct;
- (void)setupWithContext:(id)a0;

@end
