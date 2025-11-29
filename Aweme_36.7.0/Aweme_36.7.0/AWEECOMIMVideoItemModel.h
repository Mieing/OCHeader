@class NSString, UIImage, AWEECOMIMBaseMsgModel;

@interface AWEECOMIMVideoItemModel : NSObject

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *apiStr;
@property (copy, nonatomic) NSString *localFilePath;
@property (copy, nonatomic) NSString *coverURLString;
@property (nonatomic) double duration;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIImage *coverImg;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) long long senderRole;
@property (weak, nonatomic) AWEECOMIMBaseMsgModel *msgModel;

+ (struct CGSize { double x0; double x1; })videoSizeWithModel:(id)a0;

- (void).cxx_destruct;

@end
