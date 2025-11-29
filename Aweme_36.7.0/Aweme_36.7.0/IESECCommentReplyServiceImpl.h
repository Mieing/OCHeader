@class NSString;

@interface IESECCommentReplyServiceImpl : NSObject <IESECCommentReplyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getParams;
+ (id)buildReplyHandlerWithParams:(id)a0;


@end
