@class NSString;

@interface AWEESHeadPictureEditFeature : AWEFeature <AWEESHeadPictureEditProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aliasName;

- (void)asynHeadPictureCertInfo:(id /* block */)a0;
- (void)enterEditPageInScene:(id)a0;

@end
