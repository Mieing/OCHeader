@class UIImage, NSError;

@interface AWEIMEncryptImageRequestResult : NSObject

@property BOOL success;
@property BOOL fromCache;
@property (retain) UIImage *image;
@property (retain) NSError *error;

- (void).cxx_destruct;

@end
