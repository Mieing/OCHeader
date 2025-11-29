@class NSString, UIImage, UIColor;

@interface AWEIMMixLoraUserCellModel : NSObject

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *modelId;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) UIImage *loraImage;
@property (copy, nonatomic) NSString *loraImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *countInfo;
@property (nonatomic) BOOL vacant;
@property (nonatomic) BOOL disableCell;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;

@end
