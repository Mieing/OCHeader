@class ACCMVTemplateDetailViewController, NSString, NSDictionary, NSIndexPath, UIViewController;
@protocol ACCMVTemplateModelProtocol;

@interface ACCMVTemplateDetailTableViewCell : UITableViewCell

@property (retain, nonatomic) ACCMVTemplateDetailViewController *viewController;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) NSDictionary *musicDetailTrackParams;
@property (nonatomic) BOOL isFromMusicDetail;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *itemId;

+ (id)cellidentifier;

- (void)_removeChildVC;
- (void)_addChildVC;
- (void)updateWithTemplateModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stop;
- (void)reset;

@end
