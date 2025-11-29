@class UIImage, NSString;

@interface IESIMAssetResult : NSObject <IESIMAssetResultInterface>

@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
