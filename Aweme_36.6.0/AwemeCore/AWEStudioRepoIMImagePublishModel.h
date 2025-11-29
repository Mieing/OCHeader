@class NSString, UIImage, NSDictionary;

@interface AWEStudioRepoIMImagePublishModel : NSObject

@property (copy, nonatomic) NSString *toConversationID;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *originImage;
@property (retain, nonatomic) NSString *checkText;
@property (nonatomic) BOOL fromGallery;
@property (nonatomic) BOOL dontChangeToText;
@property (nonatomic) BOOL shouldJustDismissTopViewController;
@property (nonatomic) BOOL disableDismiss;
@property (nonatomic) BOOL isExchange;
@property (nonatomic) long long quoteServerMessageId;
@property (copy, nonatomic) NSString *filepath;
@property (copy, nonatomic) NSString *stickerId;
@property (nonatomic) unsigned long long publishType;
@property (nonatomic) unsigned long long shootEnterType;
@property (nonatomic) BOOL isPainted;
@property (nonatomic) long long createType;
@property (retain, nonatomic) NSDictionary *locationInfo;

- (void).cxx_destruct;

@end
