@class NSString;
@protocol IESLiveGiftImageTemplateService;

@interface IESLiveRoomGiftItemCellContext : NSObject

@property (nonatomic) BOOL enableTemplate;
@property (nonatomic) BOOL enableHeic;
@property (copy, nonatomic) NSString *cacheName;
@property (weak, nonatomic) id<IESLiveGiftImageTemplateService> templateService;
@property (nonatomic) long long trackerDuration;

- (void).cxx_destruct;

@end
