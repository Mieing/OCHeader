@class NSString;

@interface AWEPOIIMPhotoManager : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (copy, nonatomic) id /* block */ photoFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
