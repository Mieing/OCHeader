@class NSString, AWEACCImageAlbumPickerDelegateMiddleMan;
@protocol AWEImageAlbumImagePickerViewControllerProtocol, ACCImageAlbumPickerControllerWrapDelegate;

@interface AWEACCImageAlbumPickerControllerWrap : NSObject <ACCImageAlbumImagePickControllerProtocol, AWEImageAlbumImagePickerViewControllerDelegate>

@property (retain, nonatomic) id<AWEImageAlbumImagePickerViewControllerProtocol> controller;
@property (retain, nonatomic) AWEACCImageAlbumPickerDelegateMiddleMan *middleMan;
@property (weak, nonatomic) id<ACCImageAlbumPickerControllerWrapDelegate> delegate;
@property (nonatomic) BOOL isSlides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
