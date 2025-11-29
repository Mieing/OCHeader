@class NSString, NSDictionary, UIImage, AWEURLModel;

@interface AWELiveShareBottomCardModel : NSObject <NSCopying>

@property (nonatomic) unsigned long long cardStyle;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) NSString *highlightStr;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) NSDictionary *enterRoomParams;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
