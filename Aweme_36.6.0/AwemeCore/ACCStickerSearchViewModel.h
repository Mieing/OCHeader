@class RACSignal, NSString, RACSubject;

@interface ACCStickerSearchViewModel : NSObject <ACCSearchStickerServiceProtocol>

@property (retain, nonatomic) RACSignal *addSearchedStickerSignal;
@property (retain, nonatomic) RACSubject *addSearchedStickerSubject;
@property (retain, nonatomic) RACSignal *configPannelStatusSignal;
@property (retain, nonatomic) RACSubject *configPannelStatusSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
