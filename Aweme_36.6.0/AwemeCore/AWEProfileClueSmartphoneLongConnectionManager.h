@class NSString;

@interface AWEProfileClueSmartphoneLongConnectionManager : NSObject <AWEProfileLongConnectionHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
