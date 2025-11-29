@class NSString, UIImage, NSNumber;

@interface AWEECOMIMEmotionMsgModel : AWEECOMIMBaseMsgModel

@property (copy, nonatomic) NSString *emotionName;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) long long emotionType;
@property (retain, nonatomic) NSNumber *emotionSetId;
@property (retain, nonatomic) NSNumber *emotionId;
@property (readonly, copy, nonatomic) id /* block */ onTap;
@property (copy, nonatomic) id /* block */ showBlock;

+ (Class)cellClass;

- (BOOL)canShowFootDescSource;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;

@end
