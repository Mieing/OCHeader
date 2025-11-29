@class NSString, RACSignal, RACSubject, ACCFileUploadServiceBuilder;
@protocol ACCNetServiceProtocol;

@interface ACCCustomStickerViewModel : NSObject <ACCCustomStickerServiceProtocol>

@property (retain, nonatomic) RACSignal *addCustomStickerSignal;
@property (retain, nonatomic) RACSubject *addCustomStickerSubject;
@property (retain, nonatomic) id<ACCNetServiceProtocol> netService;
@property (retain, nonatomic) ACCFileUploadServiceBuilder *uploadBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
