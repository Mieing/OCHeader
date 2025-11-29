@class NSString;

@interface SimplePreviewMsgInfo : SimpleMsgInfo

@property (retain, nonatomic) NSString *imagePath;

- (id)getImgPath;
- (id)getSightPath;
- (BOOL)isImgMsg;
- (BOOL)isVideoMsg;
- (void).cxx_destruct;

@end
