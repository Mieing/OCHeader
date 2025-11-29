@class NSString;
@protocol AWESelectPhotoViewControllerDelegate;

@interface AWESelectPhotoConfiguration : NSObject

@property (nonatomic) BOOL multiSelect;
@property (nonatomic) unsigned long long maxSelectCount;
@property (nonatomic) unsigned long long resourceType;
@property (weak, nonatomic) id<AWESelectPhotoViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;

- (void).cxx_destruct;
- (id)init;

@end
