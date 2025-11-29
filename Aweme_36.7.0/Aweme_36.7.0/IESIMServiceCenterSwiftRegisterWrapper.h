@class NSString, NSObject;
@protocol IESIMServiceCenterSwiftRegister;

@interface IESIMServiceCenterSwiftRegisterWrapper : NSProxy <IESIMServiceCenterSwiftRegister>

@property (retain, nonatomic) NSObject<IESIMServiceCenterSwiftRegister> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
