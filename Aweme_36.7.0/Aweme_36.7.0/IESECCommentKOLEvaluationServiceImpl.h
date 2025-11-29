@class NSString;

@interface IESECCommentKOLEvaluationServiceImpl : NSObject <IESECCommentKOLEvaluationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeDataManagerWithProductID:(id)a0;
+ (id)feedRedirector;
+ (void)diggWithAwemeID:(id)a0 type:(long long)a1 channelID:(id)a2 completionHandler:(id /* block */)a3;
+ (id)makeKolDataControllerWithProductID:(id)a0;


@end
