@class UIColor, NSString, NSArray, UIImage;

@interface IESLivePKGuestEmojiPanelViewItem : IESLiveDynamicModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSArray *imageUrls;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL isInGroup;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSArray *skins;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) int status;
@property (nonatomic) int entranceId;

+ (id)itemWithEntrance:(id)a0;

- (void).cxx_destruct;

@end
