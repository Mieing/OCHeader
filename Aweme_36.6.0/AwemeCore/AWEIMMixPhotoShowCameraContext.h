@class NSDictionary, AWEIMMessageConversation;

@interface AWEIMMixPhotoShowCameraContext : NSObject

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *trackExt;

- (void).cxx_destruct;
- (id)description;

@end
