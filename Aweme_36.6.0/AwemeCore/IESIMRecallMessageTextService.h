@class NSString;

@interface IESIMRecallMessageTextService : NSObject <IESIMRecallMessageTextService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)textForSystemRecallMessage:(id)a0;

@end
