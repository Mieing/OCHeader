@class NSString;

@interface AWEBDUploadRoutClientDelegate : NSObject <BDFileNetworkRoutClientDelegate>

@property (copy, nonatomic) id /* block */ routUploadVideoBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
