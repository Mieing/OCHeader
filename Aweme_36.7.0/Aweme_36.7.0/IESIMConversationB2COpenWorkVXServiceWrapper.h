@class NSString, NSObject;
@protocol IESIMConversationB2COpenWorkVXService;

@interface IESIMConversationB2COpenWorkVXServiceWrapper : NSProxy <IESIMConversationB2COpenWorkVXService>

@property (retain, nonatomic) NSObject<IESIMConversationB2COpenWorkVXService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
