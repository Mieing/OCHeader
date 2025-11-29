@class NSString, NSObject;
@protocol IESIMGroupQuoteMessageService;

@interface IESIMGroupQuoteMessageServiceWrapper : NSProxy <IESIMGroupQuoteMessageService>

@property (retain, nonatomic) NSObject<IESIMGroupQuoteMessageService> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
