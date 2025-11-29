@class RTEAttributeNode;

@interface WNAttachmentImgInfo : SimpleFavImgInfo

@property (weak, nonatomic) RTEAttributeNode *attribute;

- (BOOL)isImgMsg;
- (BOOL)isGifMsg;
- (id)getImgPath;
- (id)getSightPath;
- (void).cxx_destruct;

@end
