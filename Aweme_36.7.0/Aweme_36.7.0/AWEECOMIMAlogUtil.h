@class NSString;

@interface AWEECOMIMAlogUtil : NSObject <BDECPigeonAlogManagerProtocol>

@property (nonatomic) unsigned long long logDispatchType;
@property (copy, nonatomic) NSString *multiAlogInstanceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
