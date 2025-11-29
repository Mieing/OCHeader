@class NSString, UIImage;

@interface GameShareDataImageModel : NSObject

@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *base64Data;
@property (retain, nonatomic) UIImage *image;

- (void)triggerGetImapgeWithComplectionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
