@class NSString, UIImage;

@interface WCPayRemarkPageSheetConfig : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *placeHolder;
@property (nonatomic) unsigned int maxInputLength;
@property (retain, nonatomic) NSString *currentContent;
@property (nonatomic) double textViewMaxHeight;
@property (nonatomic) BOOL showRightButton;
@property (retain, nonatomic) UIImage *rightButtonImage;
@property (retain, nonatomic) NSString *rightButtonTitle;
@property (nonatomic) long long bottomType;
@property (nonatomic) unsigned int maxInputLengthForDiaplay;

- (void).cxx_destruct;

@end
