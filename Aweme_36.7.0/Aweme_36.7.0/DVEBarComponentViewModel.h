@class NSString, NSURL, UIImage;

@interface DVEBarComponentViewModel : NSObject <DVEBarComponentViewModelProtocol>

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *localAssetImage;
@property (nonatomic) BOOL showNewFeatureBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0 url:(id)a1 title:(id)a2 showNewFeature:(BOOL)a3;
- (id)initWithImageName:(id)a0 url:(id)a1 title:(id)a2 showNewFeature:(BOOL)a3;
- (id)initWithImage:(id)a0 url:(id)a1 title:(id)a2;
- (void).cxx_destruct;

@end
