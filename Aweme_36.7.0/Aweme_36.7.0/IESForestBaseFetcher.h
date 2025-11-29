@class IESForestRequest, NSString, IESForestKit;

@interface IESForestBaseFetcher : NSObject <IESForestFetcherProtocol>

@property (nonatomic) BOOL isCanceled;
@property (retain, nonatomic) IESForestRequest *request;
@property (weak, nonatomic) IESForestKit *forestKit;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
