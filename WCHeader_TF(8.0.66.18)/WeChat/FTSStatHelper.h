@interface FTSStatHelper : MMObject

+ (void)clean;
+ (void)startLoadHtml;
+ (void)finishLoadHtml:(id)a0;
+ (void)startRequestJson:(id)a0;
+ (void)endRequestJson:(id)a0;
+ (void)startRequestRes:(id)a0;
+ (void)syncRecvRes:(id)a0;
+ (void)asyncRecvRes:(id)a0;
+ (void)failRecvRes:(id)a0;

@end
