@class NSString, NSDictionary, AWEAwemeModel, NSError, BDImageView;

@interface AWEAdPromptPictureView : UIView <AWEAdPromptView>

@property (retain, nonatomic) BDImageView *pictureImageView;
@property (copy, nonatomic) NSString *requestURL;
@property (nonatomic) double loadDuration;
@property (retain, nonatomic) NSError *loadError;
@property (copy, nonatomic) id /* block */ didFailToLoadHandler;
@property (copy, nonatomic) id /* block */ didFinishLoadHandler;
@property (copy, nonatomic) NSDictionary *liveRoomInfo;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowNativePictureCardView:(id)a0;

- (void)startLoadWithCardModel:(id)a0;
- (void)setupConstraint;
- (void).cxx_destruct;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (void)reset;

@end
