@class NSString, NSDictionary, AWEAwemeModel, UIImage, AWEURLModel;

@interface AWESpecialCardSubscribeSheetConfig : NSObject <NSCopying>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleIcon;
@property (retain, nonatomic) AWEURLModel *titleIconUrl;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) AWEURLModel *thumbnailUrl;
@property (copy, nonatomic) NSString *thumbnailInfo;
@property (copy, nonatomic) id /* block */ allowButtonClick;
@property (copy, nonatomic) id /* block */ refuseButtonClick;
@property (copy, nonatomic) id /* block */ maskAreaClicked;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
