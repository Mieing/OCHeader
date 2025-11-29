@class CKGenericTemplateModel, UIImage;

@interface AWEProfileAvatarPostSnackBarManager : NSObject

@property (retain, nonatomic) CKGenericTemplateModel *storyTemplateModel;
@property (retain, nonatomic) UIImage *photo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)reset;

@end
