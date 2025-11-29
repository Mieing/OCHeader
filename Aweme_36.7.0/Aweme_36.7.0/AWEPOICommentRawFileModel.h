@class NSString, NSNumber;

@interface AWEPOICommentRawFileModel : NSObject

@property (copy, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSNumber *fileType;
@property (copy, nonatomic) NSString *fileUrl;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *videoCoverURL;

- (void).cxx_destruct;

@end
