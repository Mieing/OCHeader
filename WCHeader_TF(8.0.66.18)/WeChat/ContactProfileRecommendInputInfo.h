@class NSString, NSArray;

@interface ContactProfileRecommendInputInfo : NSObject

@property (retain, nonatomic) NSString *from_user;
@property (retain, nonatomic) NSString *receive_user;
@property (retain, nonatomic) NSArray *verify_msgs;
@property (retain, nonatomic) NSArray *chat_msgs;
@property (retain, nonatomic) NSArray *ocr_msgs;

- (void).cxx_destruct;

@end
