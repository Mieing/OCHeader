@class NSString, NSDictionary, UIImage, NSNumber, AWEURLModel;

@interface AWESearchCardAvatarComponentModel : NSObject

@property (retain, nonatomic) AWEURLModel *url;
@property (nonatomic) BOOL isLiveStatus;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) UIImage *verifyImage;
@property (nonatomic) BOOL isTopic;
@property (nonatomic) BOOL isAI;
@property (nonatomic) unsigned long long sizeType;
@property (retain, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *authorID;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) NSString *accessibilityString;

- (void).cxx_destruct;

@end
