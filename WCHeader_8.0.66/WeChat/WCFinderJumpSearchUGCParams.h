@class NSString;

@interface WCFinderJumpSearchUGCParams : NSObject

@property (nonatomic) unsigned long long object_id;
@property (retain, nonatomic) NSString *stream_title;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *session_buffer;
@property (nonatomic) unsigned int search_scene;
@property (nonatomic) unsigned int comment_scene;

- (void).cxx_destruct;

@end
