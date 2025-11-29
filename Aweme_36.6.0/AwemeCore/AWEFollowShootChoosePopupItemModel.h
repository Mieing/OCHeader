@class NSString, NSDictionary, UIImage, AWEFollowShootChoosePopupTrackModel, AWEURLModel;

@interface AWEFollowShootChoosePopupItemModel : AWEBaseBizConfigModel

@property (retain, nonatomic) AWEURLModel *lightIcon;
@property (retain, nonatomic) UIImage *lightIconImage;
@property (retain, nonatomic) AWEURLModel *darkIcon;
@property (retain, nonatomic) UIImage *darkIconImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEFollowShootChoosePopupTrackModel *clickTrack;
@property (copy, nonatomic) NSString *handlerName;
@property (copy, nonatomic) NSDictionary *handlerData;
@property (copy, nonatomic) id /* block */ handlerBlock;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
