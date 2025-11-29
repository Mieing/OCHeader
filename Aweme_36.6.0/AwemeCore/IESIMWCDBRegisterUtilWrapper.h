@class NSString, NSObject;
@protocol IESIMWCDBRegisterProtocol;

@interface IESIMWCDBRegisterUtilWrapper : NSProxy <IESIMWCDBRegisterProtocol>

@property (retain, nonatomic) NSObject<IESIMWCDBRegisterProtocol> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
