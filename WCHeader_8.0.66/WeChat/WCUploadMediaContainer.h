@class WCUploadMedia;

@interface WCUploadMediaContainer : NSObject

@property (readonly, nonatomic) WCUploadMedia *mainUploadMedia;
@property (retain, nonatomic) WCUploadMedia *livePhotoUploadMedia;

- (id)initWithMainUploadMedia:(id)a0;
- (void).cxx_destruct;

@end
