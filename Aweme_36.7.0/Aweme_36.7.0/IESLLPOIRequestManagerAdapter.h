@class NSString;
@protocol IESLLPOIRequestManagerProtocol;

@interface IESLLPOIRequestManagerAdapter : NSObject <AWEPOIRequestManagerProtocol>

@property (weak, nonatomic) id<IESLLPOIRequestManagerProtocol> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertRequestManager:(id)a0;

- (id)getLiveExplanationCardHeaderParams;
- (id)getLiveShareGetHeaderParams;
- (id)getMallFeedParams;
- (id)getMallHomePageParams;
- (id)getNearybyFeedParams;
- (id)getMallDiamondPositionParams;
- (id)getPoiDetailHeaderParams;
- (id)getProductDetailHeaderParams;
- (id)getLiveShelfHeaderParams;
- (id)getLiveCollectReturnHeaderParams;
- (id)getLiveAutoDrawHeaderParams;
- (void).cxx_destruct;

@end
