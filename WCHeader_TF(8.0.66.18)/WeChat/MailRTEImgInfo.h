@class MailRTEAttachment;

@interface MailRTEImgInfo : SimpleImgInfo

@property (retain, nonatomic) MailRTEAttachment *attachment;

- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (id)getImgPath;
- (void).cxx_destruct;

@end
