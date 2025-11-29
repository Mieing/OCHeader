@class NSString, BDWebImageRequest;

@interface IESForestImageRequestOperation : NSObject <IESForestRequestOperation>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) BDWebImageRequest *imageRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)initWithImageRequest:(id)a0;

@end
