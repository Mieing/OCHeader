@class NSString, NSArray, UIImage, NSAttributedString, IESIMRecentShareCellUIConfig;
@protocol AWEIMShareModelProtocol;

@interface IESIMRecentShareCellModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *smallIcon;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSAttributedString *subTitleAttributedString;
@property (copy, nonatomic) NSArray *descStackViewArray;
@property (nonatomic) unsigned long long bottomIconType;
@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) IESIMRecentShareCellUIConfig *uiConfig;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;

- (void).cxx_destruct;
- (id)init;

@end
