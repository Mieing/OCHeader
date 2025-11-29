@class NSArray, NSString;

@interface AFDFriendsRequestEntryViewModel : NSObject

@property (nonatomic) unsigned long long sourceFrom;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL useDefaultImageForTopTab;
@property (nonatomic) BOOL hasExited;
@property (copy, nonatomic) id /* block */ imageAdapter;
@property (nonatomic) double avatarHeight;
@property (nonatomic) double fontSize;
@property (nonatomic) double textLabelPadding;
@property (nonatomic) double textLabelHeight;
@property (nonatomic) double backgroundColorAlpha;
@property (copy, nonatomic) NSString *backgroundColorHexString;
@property (nonatomic) double leftPadding;
@property (nonatomic) double middlePadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) long long rightDotNumber;
@property (nonatomic) BOOL shouldOptBubble;

- (void).cxx_destruct;

@end
