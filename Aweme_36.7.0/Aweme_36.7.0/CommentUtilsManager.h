@interface CommentUtilsManager : NSObject

+ (id)obtainAbsolutePath:(id)a0;
+ (id)writeImageDataToDisk:(id)a0;
+ (id)generateMediaFeedInteractionConfig:(id)a0;
+ (id)customItemConversion:(id)a0 completionHandler:(id /* block */)a1;
+ (void)diggComment:(id)a0;
+ (void)assignBeginEditType:(id)a0 type:(id)a1;
+ (id)generateMediaLocalPath:(id)a0;
+ (void)trackJSBCommentEventWithJSBName:(id)a0 serviceID:(id)a1 enterFrom:(id)a2 extraParams:(id)a3;
+ (id)generatePanelListMediaFeedInteractionConfig:(id)a0;
+ (id)generateListInputConfig:(id)a0;
+ (void)attachToCommentTrackNode:(id)a0 customCommentTrackParams:(id)a1;
+ (id)generatePanelReplyListMediaFeedInteractionConfig:(id)a0;

@end
