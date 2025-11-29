@class NSString, RACSignal, RACSubject, UIGestureRecognizer, ACCQuickFlashStickerHandler;

@interface ACCQuickFlashStickerServiceImpl : NSObject <ACCQuickFlashStickerServiceProtocol>

@property (retain, nonatomic) RACSubject *quickFlashStickerEditSubject;
@property (retain, nonatomic) ACCQuickFlashStickerHandler *quickFlashStickerHandler;
@property (nonatomic) BOOL quickFlashStickerIsFetchingData;
@property (readonly, nonatomic) RACSignal *quickFlashStickerEditSignal;
@property (readonly, nonatomic) UIGestureRecognizer *recommendBarPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
