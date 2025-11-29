@class NSString;

@interface ACCStickerMigrateContext : NSObject <ACCCrossPlatformMigrateContext>

@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) double transformX;
@property (nonatomic) double transformY;
@property (copy, nonatomic) NSString *textParams;
@property (nonatomic) BOOL isLyricSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
