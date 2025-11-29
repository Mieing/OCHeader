@class APCDTOEditComposerModel, NSString, AWEVideoPublishViewModel;

@interface AWECanvasVideoConfigAssembler : NSObject <AWEVideoConfigAssembler>

@property (retain, nonatomic) APCDTOEditComposerModel *config;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
