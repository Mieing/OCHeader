@class NSString, UIImage;

@interface TXRecordResult : NSObject

@property (nonatomic) long long retCode;
@property (retain, nonatomic) NSString *descMsg;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) UIImage *coverImage;

- (id)description;
- (void).cxx_destruct;

@end
