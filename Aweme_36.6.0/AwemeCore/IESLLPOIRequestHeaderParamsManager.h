@class NSString;

@interface IESLLPOIRequestHeaderParamsManager : NSObject <IESLLPOIRequestManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

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

@end
