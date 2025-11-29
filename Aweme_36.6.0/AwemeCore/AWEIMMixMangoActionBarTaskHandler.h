@class NSString;

@interface AWEIMMixMangoActionBarTaskHandler : NSObject <AWEIMMixMangoActionBarTaskHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)doAIMixPhotoTaskWithCid:(id)a0 completion:(id /* block */)a1;

@end
